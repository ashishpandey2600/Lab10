#include<iostream>
#include<vector>
using namespace std;
class vectors{
    public:
        vector<float> name;

    void create()
    {

        name.push_back(3.12);
        name.push_back(4.54);
        name.push_back(5.54);

    }
    void modify()
    {float store;
    cout<<"before modification"<<endl;
        for(int i=0;i<name.size();i++)
        {
            cout<<name[i];
            cout<<endl;
        }
        cout<<"Enter your values to modify"<<endl;
        for(int i=0;i<name.size();i++)
        {
            cin>>name[i];
        }
        cout<<"after modification"<<endl;
        for(int i=0;i<name.size();i++)
        {
            cout<<name[i];
            cout<<endl;
        }

        

    }
    void multiply()
    {
        int num;
        cout<<"Enter the number to multiply"<<endl;
        cin>>num;
        for(int i=0;i<name.size();i++)
        {
            name[i]=name[i]*num;
        }

    }
    void display()
    {
        cout<<"(";
        for(int i=0;i<name.size();i++)
        {
            cout<<name[i]<<",";
            
        }
        cout<<")";
    }

};

int main()
{
    vectors obj;
    obj.create();
    obj.modify();
    obj.multiply();
    obj.display();

    return 0;
}