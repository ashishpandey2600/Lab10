#include<iostream>
using namespace std;
class rectangle{
    public:
    float length;
    float width;
    float perimeter(float l,float w)
    {
        float z=2*(l+w);
        return z;


    }
    float area(float l,float w){
        float y=l*w;
        return y;
    }
    void input(){
        cout<<"Enter the length and the width of rectangle "<<endl;
    cin>>length>>width;

    }
    void output()
    {
    float z=perimeter(length,width);
    cout<<"perimeter member funtion called : "<<endl<<"perimeter = "<<z<<endl;
    float y=area(length,width);
    cout<<"area member funtion called : "<<endl<<"area = "<<y;

    }


};
int main()
{
     rectangle obj;
     obj.input();
     obj.output();
    

    return 0;
}