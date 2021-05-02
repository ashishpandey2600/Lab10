#include<iostream>
using namespace std;
int arr[10],t;
void Prime(int n)
{ int b;
    bool flag=0;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0){
            flag = 1;
           return;
        }
    }
    t=1;
    while(n>0){
    n=n/10;
    arr[b]+=1;


    }
        
}

int main()
{  //defining size of an array
int L,R,k,max,no,count=0;
  cout<<"Enter the value of L and R \n";
  cin>>L>>R;
  int arr[100];
  for(int i=L;i<=R;i++)
  {
      Prime(i);
      if(t==0)
          cout<<"-1"<<endl;
      else 
      {
         max=arr[0];
          no=0;
      }
     
  }
  //printin and testing
  for(int i=0;i<=9;i++)
  {
  if(arr[i]>max)
  {
      max=arr[i];
      no=i;
  }
  }
  cout<<no<<" number of times ocurrs";
  cout<<endl;
  cout<<max<<"Max";







  return 0;

}