//1. Write a function that accepts two arguments: two strings name of a student and name department.
 //Provide a default value for the department so that if you call the function by passing single argument,
  //the department default value should be CSE. Write a main() function that proves you can call the 
  //function with a single argument alone as well as with two arguments.


#include<iostream>
#include<string>
using namespace std;
class col{
    public:
    string name;
    string dept;
void str (string onej,string twoj="CSE")
{
 cout<<onej<<endl;
 cout<<twoj<<endl;

}
};
int main()
{  col obj;
cout<<"Enter the student name\n";
 cin>>obj.name;
 cin>>obj.dept;

 obj.str(obj.name,obj.dept);






    return 0;
}