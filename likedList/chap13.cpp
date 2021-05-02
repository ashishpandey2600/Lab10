#include<iostream>
using namespace std;
struct fish{
    char kind[20];
    int weight ;
    int length;
};
int main()
{
    struct fish st;
    void enter();
    void display();
     enter();
     display();


    return 0;
}
void enter(){
    struct fish st;
    cout<<"Enter the kind of fish "<<endl;
    cin>>st.kind;
    cout<<"Enter the weight of fish in grams"<<endl;
    cin>>st.weight;
    cout<<"Enter the height of fish in inches"<<endl;
    cin>>st.length;
    return;

}
void display(){
    struct fish st;
    cout<<st.kind<<endl;
    cout<<st.weight<<endl;
    cout<<st.length<<endl;
    return;
}