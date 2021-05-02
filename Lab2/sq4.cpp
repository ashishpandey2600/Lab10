// 4. Write a program to generate random numbers in given range [m, n]. Test case :
// Input: m=10, n=50 Output: 34

//done

#include<iostream> 
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
  int m,n;
  cout<<"Enter th values of m and n"<<endl;
  cin>>m>>n;
   srand(time(NULL));
  
   int num=rand()%(n-m+1)+m;
 cout<<num;




    return 0;
}