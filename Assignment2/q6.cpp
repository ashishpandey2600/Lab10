#include<iostream>
using namespace std;

class Landline_Phone{
    public:
    int sub_Number;
    int arr_call[20];
    
    string save_name[20];
    void call(int sub_Number)
    {
         
        cout<<"Calling "<<sub_Number<<endl;
        
    }
    void receive()
    {
        cout<<"receiving"<<endl;
    }

};
class MobilePbone: public Landline_Phone{
public:
string names[20];
int  number[20];
int count;
MobilePbone()
{
    count=0;

}

void save()
{
    cout<<"Enter the number to save"<<endl;
    for(int i=0;i<2;i++){
    cout<<"Name = ";
    cin>>names[i];
    cout<<endl;
    cout<<"number = ";
    cin>>number[i];
    
    }
}
void callByName(string sub_name)
{
    int flag=0;
    for(int i=0;i<20;i++)
    {
        if(sub_name==names[i])
        {
            flag=1;
            arr_call[count]=number[i];
            save_name[count]=sub_name;
            count++;
            call(number[i]);
        }
        
    }  
   if(flag==0)
        cout<<"Match not found!!"<<endl;

}
void Display_dial()
{

    int choice;
    cout<<"Recent Dialed"<<endl;
    for(int i=0;i<count;i++)
    {
        cout<<i+1<<". ";
        cout<<"name = "<<save_name[i]<<endl;
        cout<<"number = "<<arr_call[i]<<endl;
    }
    cout<<"Enter option to which Phone number to call "<<endl;
    cin>>choice;
    call(arr_call[choice-1]);
}
};
int main()
{
    string str;
    MobilePbone obj;
    obj.save();
    cout<<"Enter Name to call : "<<endl;
    cin>>str;
    obj.callByName(str);
    cout<<"Enter Name to call : "<<endl;
    cin>>str;
    obj.callByName(str);
    obj.Display_dial();
    return 0;
}