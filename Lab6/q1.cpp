#include<iostream>
#include<math.h>
using namespace std;
class polar
{
    public:
double radius;
    double angle;
    void input()
    {
        cout<<"Enter the radius : ";
        cin>>radius;
        cout<<"Enter the angle : ";
        cin>>angle;

    }
    void Display()
    {
        cout<<"Radius = "<<radius<<endl;
        cout<<"Angle = "<<angle<<endl;

    }
    

};
class rectangle
{ public:

rectangle(){}
    
double x,y;
void Display()
{
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
}
void input()
{
    cout<<"Enter the X "<<endl;
    cin>>x;
    cout<<"Enter the Y "<<endl;
    cin>>y;
}


rectangle(polar obj1)
{   
    x= obj1.radius*cos(obj1.angle);
    y= obj1.radius*sin(obj1.angle);
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
    
}

};
void calculate(polar obj1,rectangle obj2)
{
    int r=sqrt((obj2.x*obj2.x)+(obj2.y*obj2.y));
     cout<<"Distance between two points = "<<r;
}



int main()
{ 
    polar obj1;
    obj1.input();
    rectangle obj2;
    obj2=obj1;
    obj2.input();
    obj2.Display();
    calculate(obj1,obj2);
   
    


    return 0;
}