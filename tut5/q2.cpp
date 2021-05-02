#include<iostream> 
using namespace std; 
class Car
{
public: 
int speed; 
};
int main() {
int Car:: *pSpeed=&Car:: speed; Car c1;
c1.speed=1; cout<<c1.speed<<endl; c1.*pSpeed=2; cout<<c1.speed<<endl;
return 0;
}