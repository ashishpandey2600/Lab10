#include<iostream>
#include<string.h>
using namespace std;
struct Swimmingclub{
    int memnumber;
    char memname[20];
    char memtype[3];
};
int main()
{ Swimmingclub per1,per2;
   cout<<" Member Number : ";
   cin>>per1.memnumber;
   cout<<"Member Name : ";
   cin>>per1.memname;
   cout<<"Member type : ";
   cin>>per1.memtype;
   per2=per1;
   cout<<"Member Number : "<<per2.memnumber;
   cout<<"Member Name : "<<per2.memname;
   cout<<"Member type : "<<per2.memtype;

   




    return 0;
}