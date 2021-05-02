// 5. An automobile company has serial number for engine parts starting from AA0 to FF9. 
// The other characteristics of parts to be specified in a structure are: Year of 
// manufacturing, material (Steel, Aluminum, Iron etc.) and quantity manufactured.
// Write a program to include following tasks:
// (a) Specify a C structure that includes four members viz. serial numbers, year 
// of manufacturing, material type, and quantity. Declare an array of structure of size 60.
// (b) Automatically initialize the values of structure members as follows :
// i. Generate serial numbers such that first part has serial number AA0 and 60th 
// part has serial number FF9.
// ii. Randomly generate year of manufacturing in the range [1990-2018]
// iii.Randomly initialize material type from three choices ie. Steel, Aluminum, Iron
// iv.Randomly initialize quantity in the range [1-1000]
// (c) Display the information of the parts with serial numbers between any given 
// range such as [BB1,CC6].
//Done

#include<iostream>
#include<string>
#include<ctime>
#include<random>
using namespace std;
int main()
{
    struct automobile
    {

      int serialNumber;
        int yearOfMan;
        string materialType;
        int quantity;
    };
   automobile arr[60];
   srand(time(NULL));
   //making database for serial number 
   for(int i=0;i<10;i++)
  {   
    arr[i].serialNumber=i;
  }

    
    for(int i=0;i<10;i++) //data base for manufacturing year
  {
   int yr1=1990,y2=2018;
    int num1=rand()%(y2-yr1+1)+yr1;
    arr[i].yearOfMan =num1;
    
    }

for(int i=0;i<10;i++) //data base for material type
  {
  int s=1,al=2,Ir=3;
  int num3=rand()%(Ir-s+1)+s;
  if(num3==1)
 arr[i].materialType="steel";
  else if(num3==2)
  arr[i].materialType="aluminium";
  else
  arr[i].materialType="Iron";
    
  }



  //Range
  for(int i=0;i<10;i++) //data base for quantity
  {
  int r1=1,r2=1000;
  int num4=1 + rand() % 1000;
 arr[i].quantity=num4;
  
  }
  
  //printing
  for(int i=0;i<10;i++)
  {
    cout<<"serial no. = ";
    cout<<"BB";
    cout<<arr[i].serialNumber<<endl;
    cout<<"year of manufacture = "<<arr[i].yearOfMan<<endl;
    cout<<"type of material = "<<arr[i].materialType<<endl;
    cout<<"Quantity = "<<arr[i].quantity<<endl;

  }
 for(int i=0;i<7;i++)
  {
    cout<<"serial no. = ";
    cout<<"CC";
    cout<<arr[i].serialNumber<<endl;
    cout<<"year of manufacture = "<<arr[i].yearOfMan<<endl;
    cout<<"type of material = "<<arr[i].materialType<<endl;
    cout<<"Quantity = "<<arr[i].quantity<<endl;

  }



    return 0;
}