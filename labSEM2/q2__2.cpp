/*ques - 2. Define a class to represent a bank account, including the following 
data members:

 Name of the depositors
 Account number
 Type of account
 Balance amount in the account
and member functions:
 To assign initial values
 To deposit an amount
 To withdraw an amount after checking the balance
 To display the name and balance
Write a main program to test the program.*/
#include<iostream>
#include<string>
using namespace std;
class bank_acc{
   public :
    string Name_depo;
    long long Account;
    string ac_type;
    long double Balance;
    long deposit;
    long withdraw;

    void input() 
    {
        cout<<"Enter the initial values"<<endl;
        cout<<"Name of the depositors : ";
        cin>>Name_depo;
        cout<<"Account number : ";
        cin>>Account;
        cout<<"Type of account : ";
        cin>>ac_type;
        cout<<"Balance : ";
        cin>>Balance;

        return;
    }
    void Deposit()
    {
        cout<<"Enter the  amount you want to deposit  = ";
        cin>>deposit;
        Balance+=deposit;
        cout<<"present Balance : "<<Balance<<endl;
     return ;

    }
    void Withdraw()
    {
        cout<<"Enter the amount you want to withdraw : ";
        cin>>withdraw;
        Balance-=withdraw;
        cout<<"Your Present Balance after withdraw  : "<<Balance<<endl;


    }
    void Display()
    {
        cout<<"A/C Holder name : "<<Name_depo<<endl;
        cout<<"Remaining Balance : "<<Balance<<endl;

    }
};
int main()
{
    bank_acc obj;
  obj.input();
  obj.Deposit();
  obj.Display();
  obj.Withdraw();
 
    return 0;
}