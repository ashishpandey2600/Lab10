// Question 2.
// A number is entered through the keyboard. The number may contain 1,2,3,4, or 5 digits.
//  Write a program to find the number of digits in the number.
#include<iostream>
using namespace std;
int main()
{
    int num,k,count=0;
    cout<<"Enter the number\n";
    cin>>num;
    while(num!=0)
    {
        num=num/10;
        ++count;
        

    }
     cout<<count<<" "<< "digits are in given number";


    return 0;
}