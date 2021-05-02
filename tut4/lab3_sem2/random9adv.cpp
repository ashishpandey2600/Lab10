#include<iostream> 
using namespace std; 
int arr[10],R;
void prime(int p)
{
int z,b; for(z=2;z<=p/2;z++) {
if(p%z ==0)
return; }
R=1;
 while(p>0) {
b=p%10;
 p=p/10; 
 arr[b] +=1;
} }
int main() {
int L,R,max,no;
cout<<"Enter the L : "<<endl; cin>>L;
cout<<"Enter the R : "<<endl; cin>>R;
for(int i=L;i<=R;i++)
prime(i); 
if (R == 0 )

{
cout<<" -1 "<<endl ;
} 
else {
max=arr[0];
no=0;
for(int i=1;i<=9;i++) {
if(arr[i]>max) 
{
max=arr[i];
no=i; 
}
}
cout<<endl<<"Highest occuring digit  is "<<no<<endl;
cout<<"it occured "<<max<<" times "; }
return 0;}