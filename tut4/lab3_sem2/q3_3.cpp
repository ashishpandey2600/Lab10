#include<iostream>
using namespace std;
void Addition(int a,int b,int c,int d)
{
    int z,y;
 z = (a*d + b*c);
 y= (b*d);
 cout<<z<<"/"<<y;
 return ;
 }
void Subtraction(int a,int b,int c,int d)
{
    int z,y;
 z = (a*d - b*c) ;y=(b*d);
 cout<<z<<"/"<<y;
 return ;
 }
void Multiplication(int a,int b,int c,int d)
{int z,y;
    
 z = (a*c) ;y= (b*d);
 cout<<z<<"/"<<y;
 return ;
 }
void Division(int a,int b,int c,int d)
{
    int z,y;
 z= (a*d); y= (b*c);
 cout<<z<<"/"<<y;

 return ;
 }
int main()
{ char op;
int a,b,c,d;
    cout<<"Enter the value of a, b operator and c,d "<<endl;
    cin>>a>>b>>op>>c>>d;
    if(op=='+'){
        Addition(a,b,c,d);

    }
    else if(op=='-'){
        Subtraction(a,b,c,d);

    }
    else if(op=='*'){
        Multiplication(a,b,c,d);

    }
    else if(op=='/'){
        Division(a,b,c,d);

    }
    else
    cout<<"Try again!! wrong choice ";

    


    return 0;
}