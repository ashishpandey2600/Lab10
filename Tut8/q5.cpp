#include<iostream>
using namespace std;
class A1{
 public:
    A1()
    {
        cout<<"I am class A1  "<<endl;
    }
};
class A2:public A1{
 public:
    A2()
    {
        cout<<"I am class A2 "<<endl;
    }
};
class A3: public A2{
 public:
    A3()
    {
        cout<<"I am class A3.   "<<endl;
    }
};
int main()
{
    A3 obj;


    return 0;
}