// 2. Write a function that finds the minimum and the maximum value in 
// an array of N integers. Inputs to the function are the array of integers,
// an integer variable containing the length of the array and pointers to integer
// variables that will contain the minimum and the maximum values. The function
// prototype is:
// void minmax( int array[], int length, int * min, int * max);
// Write a main function that uses this function to find and display the
// minimum and the maximum values of an array of integers.

//done

#include<iostream>
#include<climits>
using namespace std;
void minmax1( int array[], int length, int * min, int * max)
{
    for(int i=0;i<length;i++)
    {
        if(array[i]>*max)
         *max=array[i];
         if(array[i]<*min)
         *min=array[i];


    }
    cout<<"minimum = "<<*min<<endl<<" maximum = "<<*max;

}
int main()
{   int l;
cout<<"Enter the no. of elements in array"<<endl;
cin>>l;
    int arr[l];
    cout<<"Enter the numbers in arrays\n";
    for(int i=0;i<l;i++)
    {
        cin>>arr[i];

    }
    int min = 100;
    int max=-100;
   minmax1(arr,l,&min,&max);
    
    


    return 0;
}