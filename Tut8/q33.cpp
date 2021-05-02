#include<iostream>
using namespace std;
class publication{
    public:
string title;
float price;
void getdata()
{
    cout<<"Title  = ";
    cin>>title;
    cout<<"\nPrice = ";
    cin>>price;
}
void putdata()
{
    cout<<"Title  = "<<title<<endl;
    cout<<"Price = "<<price<<endl;
}
};
class book : public publication
{
    public:
    int page_count;
    void getdata()
    {
        publication::getdata();
        cout<<"Page count = ";
        cin>>page_count;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Page count = "<<page_count<<endl;
    }

};
class tape : public publication
{
    public:
    float tape_min;

    void getdata()
    {
        publication::getdata();
        cout<<"Playing time in minutes = ";
        cin>>tape_min;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Playing time in minutes = "<<tape_min<<endl;
    }
};
int main()
{
    book obj1;
    tape obj2;
    obj1.getdata();
    obj1.putdata();
    obj2.getdata();
    obj2.putdata();



    return 0;
}