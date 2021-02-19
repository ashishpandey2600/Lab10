//5. Write a program which takes a string as input from user and returns the length of that
// string without using any string library functions.



#include<iostream>
using namespace std;
int main()
{
    char strg[100];
    int count=0;
    cout<<"Enter the string\n";
    cin.getline(strg,100);
    for(int i=0;strg[i]!='\0';i++)
    {
        count++;
    }
    cout<<count<<" "<< "charachter in string ";



    return 0;
}