#include<iostream>
using namespace std;
struct student{
    int rollno;
    char name[20];
    float marks[5];
    char grade;

}st;

int main()
{ cout<<"Enter the Rollno. "<<endl;
  cin>>st.rollno;
  cout<<"\n"<<"Enter name : "<<endl;
  cin>>st.name;
  cout<<"\n"<<"enter marks of five subject :"<<endl;
  for(int i=0;i<5;i++)
  {
      cout<<"\n"<<"subject "<<i+1<<":";
      cin>>st.marks[i];
  }
  float avg,total=0;//loop for additon
  for(int i=0;i<5;i++)
  {
     
      total+=st.marks[i];
  }
  avg=total/5;
  if(avg<5)st.grade='F';
  else if(avg<5)st.grade='F';
  else if(avg<5)st.grade='F';
  else st.grade='A';

  //print result
  cout<<"\n"<<"\n"<<"Student result : "<<"\n";
  cout<<"rollno : "<<st.rollno<<"\t";
  cout<<"name :";
  cout.write(st.name,21);
  cout<<"\n"<<"Total Marks : "<<total;
  cout<<"\t"<<"grade : "<<st.grade<<endl;
  
    return 0;
}