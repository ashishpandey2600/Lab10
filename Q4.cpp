// Question 4. Write a program to calculate factorial of a number N through recursion.
#include<iostream>
using namespace std;

int fact(int n){

    if(n==0)
    {
        return 1;
    }
    int m=n*fact(n-1);
    return m;
}
int main()
{
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    cout<<fact(num);
    return 0;
}