#include<iostream>
using namespace std;
class str{
    public:
    string one;
    string two;
    void stringmaker()
    {
        string third;
        third=one +two;
        cout<<third;

    }
};
int main()
{
    str obj;
    obj.one="Ashish ";
    obj.two="is good coder";
    obj.stringmaker();
    


    return 0;
}