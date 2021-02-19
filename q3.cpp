// 3. Write a program which finds a four digit number AABB which is a perfect square. 
// A and B represent different digits. For example 7744 is a four digit perfect square 
// number which is also satisfying the condition AABB ie. first two digits (AA=77) are 
// same and last two digits (BB=44) are same.


#include<iostream>
using namespace std;
int main()
{
     int num, div, sum=0,j;
    for(int i=1000;i<10000;i++)
    {
        if((i%10==(i/10)%10)&&((i/100)%10==(i/1000)%10))
        { 
    for(int j=2;j<=i;j++)
        if(j*j==i)
            cout<<i;
        
        }
        
    }
    return 0;
}

