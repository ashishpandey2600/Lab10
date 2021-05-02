#include<iostream>
using namespace std;
class abc
{
      int a;
      public:
             void input(int a1)
             {
                  a=a1;
             }
             int display()
             {
                  return(a);
             }   
};

void show(abc &S)
{
    cout<<S.display();
}

int main()
{
    abc a;
    a.input(10);
    show(a);
    system("pause");
    return 0;
}