#include<iostream>
#include<stdlib.h>
using namespace std;
class ITEM{
    int itemcode[50];
    float it_price[50];
    public:
    void intialize(void);
    float largest(void);
    float sum(void);
    void display_items(void);
};
//........MEmber function Definitions Follow........
void ITEM :: intialize(void)
{
    for(int i=0;i<50;i++)
    {
        cout<<"\n"<<"Enter item code: ";
        cout<<"\n"<<"Enter item code :";
        cin>>itemcode[i];
        cout<<"\n"<<"Enter item price: ";
        cin>>it_price[i];
        cout<<"\n";
    }

}
float ITEM::largest(void)
{
    float large =it_price[0];
    for(int i=0;i<50;i++)
    {
        if(large<it_price[0])
        large =it_price[i];
    }
    return large;

}
float ITEM::sum (void)
{
    float sum= 0;
    for(int i=0;i<5;i++)
    sum+=it_price[i];
    return sum;
}
void ITEM::display_items(void)
{
    cout<<"\ncode Price\n";
    for(int i=0;i<50;i++){
        cout<<"\n"<<itemcode[i];
        cout<<" "<<it_price[i];

    }
    cout<<"\n";
}
int main()
{
    ITEM order;
    order.intialize();
    float total,biggest;
    int ch=0;
    system("cls");
    do{
        cout<<"\nMain menu.\n";
        cout<<"\n1.Display largest price.";
        cout<<"2.Display sum of prices.";
        cout<<"\n3.Display item list.";
        cout<<"\nEeter your choice(1-3):";
        cin>>ch;
        switch(ch){
            case 1: biggest=order.largest();
            cout<<"The Largest price is "<<biggest<<"\n";
            break;
            case 2: total=order.sum();
            cout<<"The sum of prices is "<<total<<"\n";
            break;
            case 3: order.display_items();
            break;
            default:cout<<"\n Wrong choise!\n";
            break;

        }
    }while(ch>=1&&ch<=3);
    return 0;
}