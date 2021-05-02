// 1. Write a function that will return the length of a character string using pointer. You are
// not allowed to use the strlen C library function.

//done
#include<iostream> 
using namespace std;
void Lcounter(char *str){
 int count=0;
while(*str!='\0')
  {
    str++;
    count++;
  }
cout<<count;
}
int main()
{  int len;
  char str[10];
   cout<<"Enter the string"<<endl;
   cin>>str;
   Lcounter(str);
 
 return 0;

}