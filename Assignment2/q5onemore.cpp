#include<iostream>
#include<string>
using namespace std;
class Admnistration;
class Faculty;
class student { 


    public:
    string student_name;
    int roll_no;


    void print()
    {
        cout<<"Student Name = "<<student_name;
        cout<<endl;
        cout<<"Roll number = "<<roll_no;
        cout<<endl;
    }
    friend class Administration;
};
class T1T2T3:public student{
    public:
    int T1_marks,T2_marks,T3_marks;
    void display(){
        cout<<"T1 marks = "<<T1_marks<<endl;
        cout<<"T2 marks = "<<T2_marks<<endl;
        cout<<"T3 marks = "<<T3_marks<<endl;
    }
    friend class Faculty;

};
class P1P2: public student{
    public:
   int P1_marks,P2_marks;
   void Print()
   {
       cout<<"P1 Marks = "<<P1_marks<<endl;
       cout<<"P2 Marks = "<<P2_marks<<endl;
   }
    friend class Faculty;


};
class Attendence: public student{
    public:
    int  perc_attend;
    void PrintA()
    {
        cout<<"percentage of attendance = "<<perc_attend<<endl;
    }
    friend class Faculty;

};
class Total:public T1T2T3,public P1P2,public Attendence{
    public:
    int Total_marks;
    char grade;
    void display()
    {
        cout<<"Total marks = "<<Total_marks<<endl;
        cout<<"Grade = "<<grade<<endl;
    }
    friend class Administration;

};

class Administration{
    public:
    void Total(Total &obj)//call funtion after enter the marks
    { obj.Total_marks=obj.T1_marks+obj.T2_marks+obj.T3_marks+obj.P1_marks+obj.P2_marks+obj.perc_attend;

     if(obj.Total_marks>80)
        obj.grade='A';
        else if(obj.Total_marks>70&& obj.Total_marks<80)
        obj.grade='B';
        else if(obj.Total_marks>60&& obj.Total_marks<70)
        obj.grade='C';
       else if(obj.Total_marks>50&& obj.Total_marks<60)
        obj.grade='D';
        else 
        obj.grade='F';

    }
    void Enter_name(student &obj)
    {
         cout<<"Name = ";
        cin>>obj.student_name;
        cout<<endl;
        cout<<"Roll no. = ";
        cin>>obj.roll_no;

    }
};
class Faculty{
    public:
    void input(Total &obj)
    {
    
        cout<<endl;
        cout<<"Enter the marks :  "<<endl;
        cout<<"T1 = ";
        cin>>obj.T1_marks;
        cout<<endl;
        cout<<"T2 = ";
        cin>>obj.T2_marks;
        cout<<endl;
        cout<<"T3 = ";
        cin>>obj.T3_marks;
        cout<<endl;
        cout<<"P1 = ";
        cin>>obj.P1_marks;
        cout<<endl;
        cout<<"P2 = ";
        cin>>obj.P2_marks;
        cout<<endl;
        cout<<"Marks according to percentage of attendence out of 5 = ";
        cin>>obj.perc_attend;
        cout<<endl;
    }
    void display(student &obj1)
    {
        cout<<"Name = "<<obj1.student_name<<endl;
    }
    void search_name(student& obj,Total &obj2)
    {
        char name1[100];
        int flag=0;
        cout<<"Enter the Name for Search : ";
        cin>>name1;

            for(int i=0;i<5;i++){
            if(obj.student_name[i]==name1[i])
            {
            cout<<"Match found!!"<<endl;
            cout<<"Name = "<<obj.student_name<<endl;
            cout<<"Roll number = "<<obj.roll_no<<endl;
            cout<<"Grade = "<<obj2.grade<<endl;
            flag=1;
            break;
            }
            }
           if(flag==0)
            cout<<"MAtch Not found !!"<<endl;
        
    }



    


};
int main()
{
    student obj1[5];
    T1T2T3 obj2[5];
    P1P2 obj3[5];
    Attendence obj4[5];
    Total obj5[5];
    Faculty obj6[5];
    Administration obj7[5];
    for(int i=0;i<5;i++){
    obj7[i].Enter_name(obj1[i]);
    obj6[i].input(obj5[i]);
    obj7[i].Total(obj5[i]);
    }
    cout<<"name and grades of all students in the ascending order of the grades."<<endl;
    for(int i=0;i<5;i++)
    {
        if(obj5[i].grade=='A'){
          obj6[i].display(obj1[i]);

          obj5[i].display();


          cout<<endl;
        }
    }
    for(int i=0;i<5;i++)
    {
        if(obj5[i].grade=='B'){
          obj6[i].display(obj1[i]);

          obj5[i].display();
          
          cout<<endl;
        }
    }
    for(int i=0;i<5;i++)
    {
        if(obj5[i].grade=='C'){
          obj6[i].display(obj1[i]);

          obj5[i].display();
          cout<<endl;
        }
    }
    for(int i=0;i<5;i++)
    {
        if(obj5[i].grade=='D'){
          obj6[i].display(obj1[i]);

          obj5[i].display();
          cout<<endl;
        }
    }
    for(int i=0;i<5;i++)
    {
        if(obj5[i].grade=='F'){
          obj6[i].display(obj1[i]);

          obj5[i].display();
          cout<<endl;
        }
    }
    //-----------------
    for(char j=65;j<=86;j++)
    {

        for(int i=0;i<5;i++){
        if(obj1[i].student_name[0]==j){
          obj6[i].display(obj1[i]);
          obj5[i].display();
          cout<<endl;
        }
    }
   
    }
    for(int i=0;i<5;i++)
    {
    obj6[i].search_name(obj1[i],obj5[i]);

    }



    
   


    return 0;
}
