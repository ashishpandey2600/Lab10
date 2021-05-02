/*5. Write a function that accepts two arguments: a string name of a movie and an integer running
time in minutes. Provide a default value for the minutes so that if you call the function without
an integer argument, the minutes default to 90. Write a main() function that proves you can call
the function with a string argument alone as well as with a string and an integer.*/

#include<iostream>
using namespace std;

    void display(string str,int a=90)
    {
        cout<<"Movie name = "<<str<<endl;
        cout<<"total time = "<<a<<" minutes";
        return;

    }
    


int main()
{
   
    string str1;
    int b=20;
cout<<"Enter the movie name : "<<endl;
cin>>str1;


  //with single argument 
    display(str1);
    cout<<endl;
  //with double argument
    display(str1,b);
    



    return 0;
}
