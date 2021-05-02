#include<iostream>
using namespace std;
class A{
    public :
    A(){
        cout<<"A is called "<<endl;
    }

};
class B{

    public:
    B()
    {
        cout<<"B is called "<<endl;
    }
};

class C{
    public:
    C()
    {
        cout<<"C is called "<<endl;
    }

};
class D : public A ,public B , public C
{
    public:
    
    D()
    {
        cout<<"D is called "<<endl;
    }

};

int main()
{
 D obj ;




    return 0;
}