/*6. Create a class named Shirt that has the public data members collarsize and sleeveLength.
Create a class named Pants that has the public data members waistSize and inSeam. Write a
program that declares one object of each type Shirt and Pants and assigns values to the objects’
data fields. Write two overloaded functions named displayClothingFacts(). One version of the
function takes a Shirt object as an argument; the other version takes a Pants object. Each
version displays the facts about the piece of clothing. Your main() function should demonstrate
that you can call displayClothingFacts() with either type of clothing.*/

#include<iostream>
using namespace std;
class Shirt
{   public:
    int collarsize;
    int sleeveLength;

};
class pants{

    public:
    int waistSize;
    int inSem;
};


//writing overloaded function
class funcDisplay{
    public:
void displayClothingFacts(Shirt obj1 )
{
   
    cout<<"collarsize   = "<<obj1.collarsize<<endl;
    cout<<"sleeveLength = "<<obj1.sleeveLength<<endl;
    

}
void displayClothingFacts(pants obj2 )
{
   
    cout<<"waistSize = "<<obj2.waistSize<<endl;
    cout<<" inSem = "<<obj2.inSem<<endl;

}
};


int main()
{
    Shirt obj1;
    pants obj2;
    funcDisplay obj3;
    //input of shirt class attributs
    obj1.collarsize=13;
    obj1.sleeveLength=30;
    //input of second class attributs
    obj2.waistSize=38;
    obj2.inSem=19;

   // caling funtion to display given attributes
   obj3.displayClothingFacts(obj1);
   obj3.displayClothingFacts(obj2);




    return 0;
}