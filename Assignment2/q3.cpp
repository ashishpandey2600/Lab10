#include<iostream>
using namespace std;
class FLOAT{
    public:
    float num;
   FLOAT operator+(FLOAT obj)
   {
       obj.num=num+obj.num;
       return obj;

   }
   FLOAT operator-(FLOAT obj)
   {
       obj.num=num-obj.num;
       return obj;
   }
   FLOAT operator*(FLOAT obj)
   {
       obj.num=num*obj.num;
       return obj;
   }
   FLOAT operator/(FLOAT obj)
   {
       obj.num=num/obj.num;
       return obj;
   }
   
   void input()
   {
    cout<<"Enter the number ";
    cin>>num;
   }
   void display()
   {
       cout<<num<<endl;
   }
    

};
int main()
{
    FLOAT obj1;
    obj1.input();
    obj1=obj1+obj1;
    cout<<"Addition : ";
    obj1.display();

    
     obj1.input();
    obj1=obj1*obj1;
    cout<<"Multipy : ";
    obj1.display();
     obj1.input();
    obj1=obj1-obj1;
    cout<<"Subtraction : ";
    obj1.display();


    obj1.input();
    obj1=obj1/obj1;
    cout<<"Divide : ";
    obj1.display();

  

    return 0;
}