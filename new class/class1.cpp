#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int b;

    A operator+(A const obj){
        A res;
        res.a= a +obj.a;
        res.b=b+ obj.b;
        return res;
    }
    void display()
    {
        cout<<a;
    }

};
class B{
    public:
    int b;
};

int main()
{
    A obj1;
    obj1.a;
    B obj2;
    B obj3;

   obj3 =  obj1+obj2;
    

    return 0;
}