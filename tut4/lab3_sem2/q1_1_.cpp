#include<iostream>
using namespace std;
void func(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    return ;
}
int main()
{
    int a,b;
    cout<<"Enter the values for swapping "<<endl;
    cin>>a>>b;
    cout<<"Before swapping value of a = "<<a<<"  b = "<<b<<endl;
    func(a,b);
    cout<<"After swapping a = " <<a<<"  b = "<<b;




    return 0;
}