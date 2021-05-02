#include<iostream>
using namespace std;
class A{

public:
A(){
    cout<<"I m global "<<endl;
}

~A(){
    cout<<"destructor called ";
    }


};
A glob_obj(); //globally declared object is the first and last functions,

int main()
{
   A glob_obj; 




    return 0;
}