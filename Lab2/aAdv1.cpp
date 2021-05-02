// 1. Given an array A of size N-1 and given that there are numbers from 1 to N with one element missing; Write program to find the missing number.
// Test case 1: Given array: 1 2 3 5; missing element is 4.
// Test case 2: Given array: 1 2 3 4 5 6 7 8 10; missing element is 9.

#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"enter the value of N"<<endl;
    cin>>N;
    int arr[N];
    cout<<"Enter the numbers in array "<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++)
    {
        if(arr[i]!=i+1){
        cout<<"mising element is "<<i+1<<endl;
        break;}
    }


    return 0;
}
