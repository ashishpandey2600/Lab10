//Q3. Find the smallest number in an array using pointers.

#include<iostream>
using namespace std;
int main(){
int arr[3],temp;
int *ptr;
ptr=arr;
cout<<"Enter the elements of array\n";
for(int i=0;i<3;i++)
{
    cin>>arr[i];
}
for(int i=0;i<3-1;i++)
{
   for(int j=i+1;j<3;j++)
   {
       if(*(ptr+i)>*(ptr+j)){
       temp=*(ptr+j);
       *(ptr+j)=*(ptr+i);
       *(ptr+i)=temp;}
   }

}
cout<<*ptr<<" is the smallest number";


    return 0;
}