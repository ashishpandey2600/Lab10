#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
class student {
    private:
    int rollno;
    char name[25];
    float marks;
    char grade;
    public:
    void readStudent()
    {
        cout<<"\nEnter rollno : ";
        cin>>rollno;
        gets(name);
        cout<<"\nEnter name   : ";
        cin>>marks;
        cout<<"\nEnter marks  : ";
    }
    void dispStudent ()
    {
        calcaGrade();
        cout<<"Rollno. : "<<rollno<<endl;
        cout<<"Name    : "<<name<<endl;
        cout<<"Marks   : "<<marks<<endl;
    }
    int getRollno()
    {
        return rollno;
    }
    float getMarks()
    {
        return marks;
    }
    void calcaGrade()
    {
        if( marks >= 75 )
        grade = 'O';
        else if(marks >= 60)
        grade ='A';
        else if(marks >= 50)
        grade ='B';
        else if(marks >= 40)
        grade ='C';
        else 
        grade ='F';
       

    }
};
int main()
{
    int i;
    student XIIa[10];
    for(int i=0;i<10;++i)
    {
        cout<<"\nEnter details of student "<<i+1<<":";
        XIIa[i].readStudent();
    }
    int choice,rno,pos = -1,highmarks = 0;
    do{
        system ("cls");
        cout<<"\n\nMain Menu\n";
        cout<<"1.Specific student \n";
        cout<<"2. To[[ern";
        cout<<"3. Exit\n";
        cout <<"\n Enter you choice(1..3):";
        cin>>choice;
        switch(choice)
        {
            case 1 : cout<<"\n Enter roll no of student whose details U want to see: ";
            cin>>rno;
            for(i=0;i<10;++i)
            {
            if(XIIa[i].getRollno()==rno)
            {
                XIIa[i].dispStudent();
                break;
            }
            }
          
           if(i==10)
           cout<<"\nINVAKID ROLLNO!!!\n";
            break;
            case 2: for(i=0;i<10;++i)
            {
                if(XIIa[i].getMarks()>highmarks)///NOTICE accessor used here
                {
                    pos=i;
                    highmarks=XIIa[i].getMarks();
                }
            }
            XIIa[pos].dispStudent();
            break;
            case 3 : break;
            default : cout<<"\nwrong Choice !!\n";
                      break;

        }
    }while(choice>=1 && choice <3);



    return 0;
}