#include<iostream>
#include<algorithm>
using namespace std;
void minmax( int array[], int length, int& min, int &max){
    for(int i=0;i<length;i++)
    {
        if(array[i]>max )
        max=array[i];
        if(array[i]<min)
        min=array[i];
        
    }
  
    return;

}
int main()
{
    int N;
  cout<<"Enter the lenght of ";
  cin>>N;
  int arr[N];
  cout<<"Enter the elements in an array\n";
  for(int i=0;i<N;i++)
  {
      cin>>arr[i];

  }
  int min=INT_MAX;
  int max=INT_MIN;
  minmax(arr,N,min,max);
  cout<<"maximum value in array is = "<<max;
  cout<<endl<<"minimum value in array is = "<<min;



    return 0;
}