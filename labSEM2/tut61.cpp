// Q1. Create two classes the first holds customer data- specifically, 
// a customer number and zip code. The second, a class for cities, holds the city name, state,
//  and zip code. Additionally, each class contains a constructor that takes arguments to set
//   the field values. Create a friend function that displays a customer number and the cu
// stomer’s city, state, and zip code. Write a brief main() function to test the classes 
// and friend function.

#include<iostream>
#include<string>
using namespace std;
class cities;
class data{
    public:
    int cus_num;
    int zipcode;
    data(int a,int b)
    {
        cus_num=a;
        zipcode=b;
    }
    friend void display(data,cities);

};
class cities{
    public:
    string state;
    string city_name;


    cities(string s,string c)
    {
        state=s;
        city_name=c;
        
    }
    friend void display(data,cities);

};
void display(data obj1,cities obj2)
{   
    cout<<"customer number = "<<obj1.cus_num<<endl;
    cout<<"customer Zipcode = "<<obj1.zipcode<<endl;
    cout<<"customer city = "<<obj2.city_name<<endl;
    cout<<"customer state = "<<obj2.state<<endl;

}

int main()
{
    data one(420,226201);
    cities two("Lucknow","uttar pradesh");
    display(one,two);



    return 0;
}