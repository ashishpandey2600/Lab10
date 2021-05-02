/*Write a class definition for an order class for a nightclub that contains a table number, 
a server’s name, and the number of patrons at the table. Include a private static data member 
for the table minimum charge, which is $4.75. Write a main() function that declares no object 
of order class type, but uses a static member function to display the table minimum charge.*/
#include<iostream>
using namespace std;
class order{
  private:
   static  double table_minimum_charge;
    int table_number;
    string server_name;
    int patrons_of_at_table;
    public:
    static double out()
    { 
     

      return table_minimum_charge;
    }

};
double order::table_minimum_charge=4.75;
int main()
{ 
    
    
  cout<<"minimum charge value = ";
   cout<<order::out();
    



    return 0;
}