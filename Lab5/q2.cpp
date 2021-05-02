#include<iostream>
using namespace std;
class cor{
    private:
    int x,y;
    public:
    cor(int a,int b)
    {
        x=a;
        y=b;
        cout<<"constructor called for cor class "<<endl;

    }
    ~cor()
    {
        cout<<"Destructor called for cor class "<<endl;
    }
};
class Rectangle{
    private:
    int top_left;
    int bottom_right;
    public:
    Rectangle(int c1,int c2)
    {
       cout<<"constructor of Rectangle called "<<endl;
    }
    ~Rectangle()
    {
        cout<<"Destructor called of rectangle class";
    }

};

int main()
{ cor(1,2);
   Rectangle(2,3);



    return 0;
}