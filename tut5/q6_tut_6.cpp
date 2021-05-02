/*6. Create an Account class that a bank might use to represent customers' bank accounts. 
Include a data member of type int to represent the account balance.
 Provide a constructor that receives an initial balance and uses it to initialize the data member. 
 The constructor should validate the initial balance to ensure that it's greater than or equal to 0.
  If not, set the balance to 0 and display an error message indicating that the initial balance was 
  invalid. Provide three member functions. Member function credit should add an amount to the current
   balance. Member function debit should withdraw money from the Account and ensure that the debit 
   amount does not exceed the Account's balance. If it does, the balance should be left unchanged 
   and the function should print a message indicating "Debit amount exceeded account balance." 
   Member function getbalance should return the current balance. Create a program that creates
    two Account objects and tests the member functions of class Account.
*/

#include<iostream>
using namespace std;
class bank_ac{
    private:
  int ac_balance;
  int cre;
  int deb;
  public:
  bank_ac()
  {

      ac_balance=0;
      if(ac_balance<0)
      cout<<"Invalid intial balance "<<endl;
      
  }
  void credit()
  {    cre=0;
      cout<<"Enter amount to credit current balance"<<endl;
      cin>>cre;
      ac_balance+=cre;
      return;
  }
  void debit()
  {
     deb=0;
     cout<<"Enter the amount to withdraw : "<<endl;
     cin>>deb;
     if(deb>ac_balance)
     cout<<"Debit amount exceeded account balance"<<endl;
     else
     ac_balance-=deb;

      return;
  }
  void getbalance()
  {
      cout<<"current balance : "<<ac_balance;

     cout<<endl<<endl;
      return;
  }
};
int main()
{
    bank_ac acc1_obj,acc2_obj2;
    //testing obj 1

  
    acc1_obj.credit();
    acc1_obj.debit();
    acc1_obj.getbalance();


    //testing second object

   
    acc2_obj2.credit();
    acc2_obj2.debit();
    acc2_obj2.getbalance();




    return 0;
}