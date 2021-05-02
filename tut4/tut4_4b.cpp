#include<iostream>
using namespace std;
float average(float *a,float *b,float *c){
    float avg=(*a+*b+*c)/3;
    return avg;
}
int main()
{ 
    float a,b,c;
    cin>>a>>b>>c;
    cout<<"The average is : "<<average(&a,&b,&c);



    return 0;
}