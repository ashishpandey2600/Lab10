#include<iostream>
using namespace std;
class rational{

    private:
    
    int denomenator;
    int numerator;
    public:
     void rat(int n,int d)
    {
        numerator=n;
        
        denomenator=d;
        while(denomenator==0)
        {
            cout<<"Invalid denomenator"<<endl;
            cin>>denomenator;
        }
    }

    rational operator*(const rational obj)
    {
        rational res;
        
        res.denomenator=denomenator*obj.denomenator;
        res.numerator=numerator*obj.numerator;
        return res;
    }
    rational operator/(rational const obj)
    {
        rational res;
        res.denomenator=denomenator/obj.denomenator;
        res.numerator=numerator/obj.numerator;
        return res;
    }
    rational operator+(rational const obj)
    {
        rational res;
        res.denomenator=denomenator*obj.denomenator;
        res.numerator=numerator*obj.denomenator+obj.numerator*denomenator;
        return res;
    }
    rational operator-(rational const obj)
    {
        rational res;
        res.denomenator=denomenator*obj.denomenator;
        res.numerator=numerator*obj.denomenator-obj.numerator*denomenator;
        return res;
    }
    void display()
    {
        cout<<numerator<<"/"<<denomenator<<endl;
    }


};
int main()
{
    rational r1,r2,r3,r4,r5,r6;
     r1.rat(2,2);
    r2.rat(2,2);

    r3=r1+r2;//addition
    r3.display();

    r4=r1-r2;
    r4.display();//subtraction

    r5=r1*r2;
    r5.display();//Multiplication

    r6=r1/r2;
    r6.display();//division

    
    return 0;
}