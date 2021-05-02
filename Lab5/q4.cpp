#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    int b;
    int c;

    A() //default contructor
    {
        a=0;
    }
    A(int b,int c) //overloading constructor
    { 
        a=b*c;
    }
    void display()
    {
        cout<<a<<endl;
    }

    
    

};

int main()
{
   
    A obj;
    A obj2 (2,2);
    obj.display();    
    obj2.display();    



    return 0;
}