#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class Student {
    private:
    int rollno;
    char name[25];
    float marks;
    char grade;
    public:
    void readStudent ()
    {
        cout<<"\nEnter the rollno : ";
        cout<<"\nEnter name : ";
        cout<<"\nEnter marks : ";
        
    }
    void dispStudent()
    {
        calcaGrade();
        cout<<"rollno: "<<rollno<<endl;
        cout<<"Name  : "<<name<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Grade : "<<grade<<endl;
    }
    int  getRollno()
    {
        return rollno;
    }
    
    float getMarks()
    {
        return marks;
    }
    void calcaGrade()
    {
        if(marks>=75)
        grade='O';
        else if(marks>=60)
        grade = 'A';
        else if(marks>=50)
        grade='B';
        else if(marks>=40)
        grade = 'C';
        else 
        grade = 'F';
        

    }
};
int main()
{
    Student XIIa[10];
    for(int i=0;i<10;++i)
    {
        cout<<"\nEnter tdetails of Student "<<i+1<<":";
        XIIa[i].readStudent();

    }
    int choice,rno,pos= -1, highmarks = 0;
    do{
        system ("cls");
        cout<<"\n\nMain Menu \n";
        cout<<"1. Specific student \n";
        cout<<"2. Topper\n ";
        cout<<"3. Exit\n";
        cout<<"\nEnter your choice(1..3)";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"\nEnter roll no of student whose detail you want see: ";
            cin>>rno;
            for(int i=0;i<10;i++)
            {
                if(XIIa[i].getRollno()==rno)
                {
                    XIIa[i].dispStudent();
                    break;
                }
            }

            case 2: for(int i=0;i<10;i++)
            {
                if(XIIa[i].getMarks()>highmarks)
                {
                    pos=i;
                    highmarks = XIIa[i].getMarks();
                }
            }
            XIIa[pos].dispStudent();
            break;
            case 3 : break;
            default : cout<<"\n Wrong choice !!\n";
            break;


        }
    }
    while(choice>=1&&choice<3);
    return 0;
}