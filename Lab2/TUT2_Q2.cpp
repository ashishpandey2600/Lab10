// Q2. Define a structure named ‘student’ containing two fields ‘name’ and ‘marks’.
// Declare an array of structure having 10 elements of student type. Write an input
// statement for inputting the marks and the names of 10 students defined as above. Write a
// complete C program to compute and print the names of those students who have got more
// than 80 marks. Also print their marks along with their names.  (using pointer)




#include<iostream>
using namespace std;
struct student 
{  
    string name;
   int marks;
   
};


int main()
{
    struct student st;
   student arr[10];
  struct student  *ptr;
//   ptr=&st;
    ptr=arr;
    for(int i=0;i<3;i++)// taking input
    {   cout<<"\n\nstudent no. : "<<i+1<<endl;
        cout<<"\nName  = ";
        cin>>arr[i].name;
        cout<<"\nMarks = ";
        cin>>arr[i].marks;

    }
    for(int i=0;i<3;i++)
    {
        
        if(arr[i].marks>79){
         cout<<"\nstdent : "<<i+1<<endl;
         cout<< ptr->name<<endl;
         cout<<ptr->marks<<endl;
        
        }
    
         ptr++;
    }



    


    return 0;
}
