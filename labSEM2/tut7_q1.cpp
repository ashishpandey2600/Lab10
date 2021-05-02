#include<iostream>
using namespace std;
class A{
    string s = "Ashish pandey";

    public:
    string stringer()
    {
        return (s);
    }
    void display()
    {
        cout<<s<<endl;
    }


};
class B {
    
    string str;
    public:
    void operator=(A s)
    {
        str=s.stringer();
    }
    void display()
    {
        cout<<str<<endl;
    }

};

int main()
{
    A a;
    B b;

    b=a;
    a.display();


    b.display();


    return 0;
}