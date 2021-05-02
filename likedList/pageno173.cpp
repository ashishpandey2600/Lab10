#include<iostream>
using namespace std;
class Item {
    int itemno;
    float price;
    public:
     void getdata(int i, float j)
     {
         itemno=i;
         price = j;
     }
     void putdata(void)
     {
         cout<<"Itemno : "<<itemno<<"\t";
         cout<<"price: "<<price<<"\n";
     }
};
const int size = 10;
Item order[size];
int main()
{ int ino;
float cost;
// Get valurs for all items
for(int a=0;a<size;a++){
    cout<<"Enter itemno & price for item "<<a+1<<"\n";
    cin>>ino>>cost;
    order[a].getdata(ino,cost);
}
//print Details
for(int a =0; a<size;a++)
{
    cout<<"Item"<<a+1<<"\n";
    order[a].putdata();
}












    return 0;
}