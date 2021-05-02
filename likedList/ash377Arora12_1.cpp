#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct addr{
    int houseno;
    char area[26];
    char city[26];
    char state[26];


};
struct emp{
    int emp_no;
    char name[26];
    char desig[16];
    addr address;
    float basic;
}worker;
int main()
{ 
    cout<<"enter employee no."<<endl;
    cin>>worker.emp_no;
    cout<<"name :"<<endl;
    cin.getline(worker.desig,16);
    cout<<"Enter address"<<endl;
    cout<<"house no."<<endl;
    cin>>worker.address.houseno;
    cout<<"area"<<endl;
    gets(worker.address.area);
    cout<<"city"<<endl;
    gets(worker.address.state);
    cout<<"basic pay"<<endl;
    cin>>worker.basic;
    
    return 0;
}