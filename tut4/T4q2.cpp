//2. Write a C++ program to find area of square, rectangle, circle and triangle by 
//using function overloading  
  
  


#include<iostream>
using namespace std;
class area{
    public:
    void  Area(int  a,int b){ //rectangle
          int c=a*b;
        cout<<"Area of rectangle is :  "<<c<<endl;
        }



    void Area(double a,double b){ //triangle
        float c=0.5*a*b;
        cout<<"Area of triangle is  :  "<<c<<endl;
    }



    void Area(int  a){ //square
       int  c=a*a;
        cout<<"Area of square   is  :  "<<c<<endl;
    }
    void Area(double a){ //circle
        float c=3.14*a*a;
        cout<<"Area of circle   is   :  "<<c<<endl;

    }
};
int main()
{ 

    area obj;
    //rectangle
    obj.Area(2,2);  
    // triangle
    obj.Area(2.5,5.5);
    //square
    obj.Area(4);
    //circle
    obj.Area(4.1);
    
    return 0;
}