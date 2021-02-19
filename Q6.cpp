// 6. Write a pointer version of the function strcat(s,t) which concatenates the string t
// to the end of string s.



#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    string s,t;
    string *ptr;
    string *ptr1;
    cout<<"Enter the first string\n";
    getline(cin,s);
    cout<<"Enter the second string\n";
    getline(cin,t); 
   ptr=&s;
   ptr1=&t;
    *ptr= *ptr+*ptr1;
    cout<<*ptr;
    


    return 0 ;
}