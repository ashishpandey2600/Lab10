#include<iostream>
using namespace std;
class Distance{
    private:
    int feet;
    int inches;
       public:
    Distance()
    {
        feet=0;
        inches=0;
    }
    void Dis(int f,int i){
        feet=f;
        inches=i;
        while (inches>12)
        {
            cout<<"Enter inches lesser than 12"<<endl;
            cin>>inches;
        }
        

    }
    
    Distance operator -(Distance const obj){
       Distance res1;
        res1.inches=inches-obj.inches;
        res1.feet=feet-obj.feet;
        return res1;

    }
    Distance operator +(Distance const obj2){
       Distance res2;
        res2.inches=inches+obj2.inches;
        res2.feet=feet+obj2.feet;
        return res2;

    }
Distance operator +=(Distance const obj3){
       Distance res4;
        res4.inches+=obj3.inches;
        res4.feet+=obj3.feet;
        return res4;

    }
    Distance operator -=(Distance const obj4){
       Distance res9;
        res9.inches-=obj4.inches;
        res9.feet-=obj4.feet;
        return res9;

    }

  bool operator <( Distance const obj5){
    if(inches<feet/12)
        return false;
    else
        return true;

    }
bool operator >( Distance const obj6){
      
      if (inches>feet/12){
          return true;

       }
        else
        return false;
}


void display()
    {

        cout<<"feet = "<<feet<<endl;
        cout<<"inches = "<<inches<<endl;
        
    } 
    
    
};
int main()
{
    Distance obj1,obj2,obj3,obj4,obj5,obj6;
    obj1.Dis(12,3);
    obj2.Dis(13,5);
    obj3=obj1+obj2;//Addition
    obj3.display();

    obj4=obj1-obj2;//subration
    obj4.display();

    obj1-=obj2;
    obj1.display();

    obj2+=obj1;
    obj2.display();

    obj5.Dis(24,11);//object for < and >
    obj6.Dis(4,1);


    if(obj6<obj5)
    {
        cout<<"obj6 is lesser than obj5"<<endl;
    }

    if(obj5>obj6)
    {
        cout<<"obj1 is greater than obj2"<<endl;
    }
    

    return 0;
}