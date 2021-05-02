#include<iostream>
#include<vector>
using namespace std;
class vectors{
    public:
        vector<float> root;

    void create()
    {

root.push_back(7.10);
root.push_back(8.54);
root.push_back(5.59);
root.push_back(90.14);

    }
    void modify()
    {float store;
    cout<<"Before modification of vestor"<<endl;
        for(int i=1;i<=root.size();i++)
        {
            cout<<root[i];
            cout<<endl;
        }
        cout<<"Enter your numbers to modify"<<endl;
        for(int i=1;i<=root.size();i++)
        {
            cin>>root[i];
        }
        cout<<"After  modification of values"<<endl;
        for(int i=1;i<=root.size();i++)
        {
            cout<<root[i];
            cout<<endl;
        }

        

    }
    void multiply()
    {
        int a;
        cout<<"Enter the value to multiply"<<endl;
        cin>>a;
        for(int i=1;i<=root.size();i++)
        {
            root[i]=root[i]*a;
        }

    }
    void display()
    {

        for(int i=1;i<=root.size();i++)
        {
            cout<<root[i]<<",";
            
        }

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