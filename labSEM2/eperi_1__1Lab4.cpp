/*1. The annual examination results of 100 students are tabulated as follows: 
__________________________________________________________________________
Roll No.   Subject 1   Subject 2    Subject 3
            ....         ....         ....
Write a program to read the data and determine the following:
a) Total marks obtained by each student.
b) The highest marks in each subject and the Roll No. of the students who secured it. 
c) The student who obtained the highest total marks.*/

#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    int sub1;
    int sub2;
    int sub3;
    int total_marks;
    int min;
    int heightest;
    int heightest_roll;


};

int main()
{
    student arr[100];
    for(int i=0;i<100;i++)
    
    {   cout<<"Enter the detailes of student no. : "<<i+1<<endl;
        cout<<"Enter the rollno"<<endl;
        cin>>arr[i].rollno;
        cout<<"Enter the subject one marks "<<endl;
        cin>>arr[i].sub1;
        cout<<"Enter the subject two marks "<<endl;
        cin>>arr[i].sub2;
        cout<<"enter the subject three marks "<<endl;
        cin>>arr[i].sub3;
        //a) Total marks obtained by each student.
        arr[i].total_marks=arr[i].sub1+arr[i].sub2+arr[i].sub3;

        //b) The highest marks in each subject and the Roll No. of the students who secured 
        if(arr[i].sub1>arr[i].sub2 && arr[i].sub1>arr[i].sub3){
        arr[i].heightest=arr[i].sub1;
        arr[i].heightest_roll=arr[i].rollno;
        }

        if(arr[i].sub2>arr[i].sub1 && arr[i].sub2>arr[i].sub3)
        {
            arr[i].heightest=arr[i].sub2;
        arr[i].heightest_roll=arr[i].rollno;
        }
        if(arr[i].sub3>arr[i].sub2 && arr[i].sub3>arr[i].sub1)
        {
            arr[i].heightest=arr[i].sub3;
        arr[i].heightest_roll=arr[i].rollno;
        }
        //c) The student who obtained the highest total marks.
        arr[i].min=0;
        if(arr[i].total_marks>arr[i].min)
        arr[i].min=arr[i].total_marks;
    }
    //output loop
    for(int i=0;i<100;i++)
    {
        cout<<"a) Total marks obtained by each student"<<endl;
        cout<<"student "<<i+1<<" : "<<endl;
        // cout<<"Roll no. : "<<arr[i].rollno<<endl;
        cout<<"Total marks =  "<<arr[i].total_marks<<endl;
        //b) The highest marks in each subject and the Roll No. of the students who secured 
        cout<<"b) The highest marks in each subject and the Roll No. of the students who secured "<<endl;
        cout<<"highest marks = "<<arr[i].heightest<<endl;
        cout<<"Roll no. who scored highest marks "<<arr[i].heightest_roll<<endl;
        //c) The student who obtained the highest total marks.
        cout<<"c)student who obtain highest marks = "<<arr[i].min<<endl;




    }
    
    



    return 0;
}