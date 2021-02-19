//1. Write a program to find K’th smallest and K’th largest element in unsorted array.
// Sample Test case1: Input:
// A[]=4, 5, 60, 70, 33, 44 K=2
// Output: 2nd smallest number is 5 and 2nd largest number is 60
// Sample Test case2: Input:
// A[]=2, 46, 56, 68, 3, 34, 489, 457, 4545, 100 K=5
// Output: 5th smallest number is 56 and 5th largest number is 68
#include<iostream>
using namespace std; 
int main()
{
    int num,K,temp;
    cout<<"Enter the number of elements of array\n";
    cin>>num;
    int arr[num];
    cout<<"Enter the value of K\n";
    cin>>K;
    cout<<"Enter the values of array\n";
    for(int i=0;i<num;i++) //INPUT of array
    {
        cin>>arr[i];
    }
    for(int i=0;i<num-1;i++)// sorting an array
    {
        for(int j=i+1;j<num;j++)
        {
            if(arr[i]>arr[j]){
                temp=arr[j];
                 arr[j]=arr[i];
                 arr[i]=temp;
                 }
        }
    }
    
    cout<<K<<" smallest number is "<<arr[K-1]<<" and "<<K<<"th largest number is " <<arr[num-K];





    return 0;
}