#include<iostream>
using namespace std;
int date(int *dd,int *mm,int *yy)
{

    int etc;
    etc=50-30;
    *mm=*mm+1;*dd=*dd+etc;
    if(*dd>31)
    {
        *dd=*dd-30;
        *mm=*mm+1;
        
    }
    cout<<*dd<<"/"<<*mm<<"/"<<*yy<<endl;
return *dd,*mm,*yy;
}
int main()
{  int d,y,m;
cout<<"enter the date in dd mm yy format"<<endl;
cin>>d>>m>>y;
date(&d,&m,&y);
    return 0;
}