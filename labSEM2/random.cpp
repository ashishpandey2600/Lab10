#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    double result,base=8,exponent=10,f;int N;
    result=(pow(base-1,exponent))+rand()%(int)((pow(base,exponent))-1);


    return 0;
}