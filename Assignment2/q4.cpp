#include<iostream>
#include<string.h>
using namespace std;
class student {
    public:
    char name[100];
    int Branch_no;

};
class CSE: public student{
    public:
    int CSE_sub1_marks,CSE_sub2_marks, CSE_sub3_marks;
    void input()
    {
        cout<<endl;
        cout<<"Name = ";
        cin>>name;
        cout<<endl;
        cout<<"Enter marks : "<<endl;
        cout<<"CSE_sub1 = ";
        cin>>CSE_sub1_marks;
        cout<<endl;
        cout<<"CSE_sub2 = ";
        cin>>CSE_sub2_marks;
        cout<<endl;
        cout<<"CSE_sub3 = ";
        cin>>CSE_sub3_marks;
        cout<<endl;
    }
    void Display()
    {
        Branch_no=1;
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Branch_Number = ";
        cout<<Branch_no<<endl;
        cout<<"CSE_sub1 = ";
        cout<<CSE_sub1_marks;
        cout<<endl;
        cout<<"CSE_sub3 = ";
        cout<<CSE_sub3_marks;
        cout<<endl;
        cout<<"CSE_sub2 = ";
        cout<<CSE_sub2_marks;
        cout<<endl;
       

    }

};
class ECE: public student{
    public:
    int ECE_sub1_marks,ECE_sub2_marks,ECE_sub3_marks;
    void input()
    {
        cout<<endl;
        cout<<"Name = ";
        cin>>name;
        cout<<endl;
        cout<<"\nEnter marks : "<<endl;
        cout<<"ECE_sub1 = ";
        cin>>ECE_sub1_marks;
        cout<<endl;
        cout<<"ECE_sub2 = ";
        cin>>ECE_sub2_marks;
        cout<<endl;
        cout<<"ECE_sub3 = ";
        cin>>ECE_sub3_marks;
        cout<<endl;
    }
    void Display()
    {
        Branch_no=2;
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Branch_Number = ";
        cout<<Branch_no<<endl;
        cout<<"ECE_sub1 = ";
        cout<<ECE_sub1_marks;
        cout<<endl;
        cout<<"ECE_sub2 = ";
        cout<<ECE_sub2_marks;
        cout<<endl;
        cout<<"ECE_sub3 = ";
        cout<<ECE_sub3_marks;
        cout<<endl;

    }


};

int main()
{
    
    student obj[5];
    CSE obj1[2];
    ECE obj2[3];
    for(int i=0;i<2;i++){
    cout<<"Enter the details of  CSE student: "<<i+1;
    obj1[i].input();
    }
    for(int i=2;i<5;i++){
    cout<<"Enter the details of  ECE student: "<<i-1;
    obj2[i].input();
    }

    for(int i=0;i<2;i++)
    {
        cout<<"Details of Student "<<i+1<<endl;
        obj1[i].Display();
    }
    for(int i=2;i<5;i++)
    {
        cout<<"Details of Student "<<i-1<<endl;
        obj2[i].Display();

    }


    return 0;
}