#include<iostream>
using namespace std;
struct measure
{
    int feet;
    int inches;
};
int main()
{ measure length1,length2;
 void prnsnum(measure l1, measure l2);
 cout<<"enter length 1 : "<<"\n";
 cout<<"Feet :";
 cin>>length1.feet;
 cout<<"\n"<<"Inches : ";
 cin>>length1.inches;
 //read values for lenght2
 cout<<"\n\nEnter the lenght2";
 cout<<"feet : ";
 cin>>length2.feet;
 cout<<"\n"<<"Inches :";
 cin>>length2.inches;
 prnsnum(length1,length2);
 
    return 0;
}
void prnsnum(measure l1,measure l2)
{
    measure l3;
    l3.feet=l1.feet+l2.feet+(l1.inches+l2.inches)/12; //1 feet=12 inches
    l3.inches = (l1.inches+l2.inches)%12;
    cout<<"\n\nTotal Feet : "<<l3.feet<<"\n";
    cout<<"Total Inches : "<<l3.inches;
    return;
    }