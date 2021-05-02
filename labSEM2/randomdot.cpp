#include<iostream>
using namespace std;


/*Define a class ITEM in C++ with the following 
specification: Private members• Item Code, 
Item Name, Price of each item, Quantity in stock,
 Discount percentage on the item• A member function 
 FindDisc( ) to calculate discount percentage as follows: 
 If Qty <=50 Discount is 0, If 50<Qty<=100 Discount is
  5 If Qty >100 Discount is 10 other member functions: 
  A function Buy( ) to allow user to enter values for Item
   Code, Item name, Price, Qty and call function FindDisc( ) 
   to calculate discount. A function ShowAll( ) to allow user
    to view the content of all data members. call this class 
    using object into main function. */
    class ITEM{
        private:
        int Item_code;
        string Item_name;
        int price;
        int quantity;
        int discount;
        public:
        void FindDisc(int qty)
        {
            if (qty <=50)
            {
                discount=0;
            }
            if( 50<qty && qty<=100)
            {
                discount=5;
            }
            if(qty >100)
            {
                discount=10;
            }
        }
            void function_Buy()
            {
                cout<<"Enter the Item code"<<endl;
                cin>>Item_code;
                cout<<"Enter the Item Name"<<endl;
                cin>>Item_name;
                cout<<"Enter the price"<<endl;
                cin>>price;
                cout<<"Enter the quantity"<<endl;
                cin>>quantity;
                FindDisc(quantity);

            }
            void function_ShowAll()
            {
                cout<< "Item_code= "  <<Item_code<<endl;
                cout<< "Item_name"<<Item_name<<endl;
                cout<<"price="<<price<<endl;
                cout<<"quantity="<<quantity<<endl;
                cout<<"discount="<<discount<<endl;

            }
        
    };
int main()
{
    ITEM obj;
    obj.function_Buy();
    obj.function_ShowAll();



    return 0;
}