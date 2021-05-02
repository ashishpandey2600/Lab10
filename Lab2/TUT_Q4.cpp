// Q4. Write a C program that reads two strings str1 and str2 and finds the no of occurrence
// of smaller strings in large string without using string function. (using pointer)
#include<iostream>//done
using namespace std;
int main()
{
char str1[10];
char str2[10];
char *ptr=str1;
char *ptr1=str2;
int count=0;
    cout<<"Enter the first string\n";
    cin>>str1;
    cout<<endl;
    cout<<"Enter the second string\n";
    cin>>str2;
    for(int i=0;*ptr!='\0';i++,ptr++)
    {
        if(*ptr==*ptr1)
        count++;
        
    }
    cout<<count<<" times appear";





    return 0;
}