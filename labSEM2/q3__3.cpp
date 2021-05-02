/*3. Create two classes DM and DB which store the value of the distances.
 DM stores distances in meters and centimeters and DB in feet and inches. 
 Write a program that can read values for the class objects and add one 
 object of DM with another object of DB.
Use a friend function to carry out the addition operation. The object that
 stores the results may be a DM object or DB object, depending on the units 
 in which the results are required. The display
should be in the format of feet and inches or meters and centimeters depending 
on the object. should be in the format of feet and inches or meters and centimeters 
depending on the object on display.*/


#include<iostream>
using namespace std;
# define val 0.3048
# define val2 2.54
double con_meter,con_centi;
class DB;
class DM

{ 
  
    double meter1;
    double centimeter;
    public:
  friend void add(DM,DB);
    
};
class DB
{  
    
    double feet;
    double inches;
    public:
    friend void add(DM ,DB );

};
void add(DM obj,DB obj2)
{  cout<<"Enter the distance : "<<endl;
    cout<<"meter : ";
    cin>>obj.meter1;
    cout<<endl;
    cout<<"centimeter : ";
    cin>>obj.centimeter;
    cout<<endl;
    cout<<" feet : ";
    cin>>obj2.feet;
    cout<<endl;
    cout<<"Inches : ";
    cin>>obj2.inches;
    cout<<endl;


   con_meter= obj2.feet*val;
   con_centi= obj2.inches*val2;
   obj.meter1+=con_meter;
   obj.centimeter+=con_centi;
 
   
   cout<<obj.meter1/100<<" meters "<<obj.centimeter<<" centimeter ";
}
int main()
{ 
    DM obj;
    DB obj2;
    add(obj,obj2);
    
    return 0;
}