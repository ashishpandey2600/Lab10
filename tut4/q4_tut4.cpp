#include<iostream>
using namespace std;
void func(char* ch,int *a)
{
    cout<<*ch<<*a;
}
int main()
{
    char p;
    int c;
    cout<<"Enter the value so programs can be tested"<<endl;
    cin>>p>>c;
    func(&p,&c);






    return 0;
}