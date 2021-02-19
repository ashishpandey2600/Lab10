// 1. Write a program to round off an integer “i” to the next largest multiple of another integer 
// “j”. For example, 256 days when rounded off to the next largest multiple divisible by a week 
// results into 259.




#include<iostream>
using namespace std;
int check (int *i,int *j)
{
    int b=*i%*j;
    if(b==0)
        return 0;
        else 
        return *i+*j-b;
    
}
int main()
{
    int i,j;
    cout<<"Enter the value of i and j \n";
    cin>>i>>j;
    cout<<check(&i,&j);
    return 0;
}