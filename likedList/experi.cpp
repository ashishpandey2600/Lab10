#include<iostream>
using namespace std;
int main()
{
    int size=10;
    int *ptr;


    cout<<"enter the number of values you want to store (size of array)"<<endl;
    cin>>size;

ptr= new int [size];
cout<<"enter The values to be stored int hte array"<<endl;
 for(int i=0;i<size;i++)
 {
     cin>>ptr[i];
 }
 cout<<"values in the array are"<<endl;
 for(int i=0;i<size;i++)
 {
     cout<<ptr[i]<<endl;
 }








    return 0;
}