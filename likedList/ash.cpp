#include<iostream>
using namespace std;
class emp{
    public:
    int emp_no;
    string emp_name;
    string designation;
    string department;
    int salary;

    void GET_DATA()
    {
        cout<<"Enter the employee no."<<endl;
        cin>>emp_no;
        cout<<"Enter the employee name "<<endl;
        cin>>emp_name;
        cout<<"Enter the designation "<<endl;
        cin>>designation;
        cout<<"Enter the department "<<endl;
        cin>>department;
        cout<<"Enter the salary "<<endl;
        cin>>salary;
        


    }
    void DISPLAY()
    {
        cout<<"employe no = "<<emp_no<<endl;
        cout<<"employee name = "<<emp_name<<endl;
        cout<<"designation = "<<designation<<endl;
        cout<<"department = "<<department<<endl;
        cout<<"salary = "<<salary<<endl;


    }

    void FETCH_EVEN()
    {
        if(emp_no%2==0){
        cout<<"Even index num "<<endl;
        cout<<"employe no = "<<emp_no<<endl;
        cout<<"employee name = "<<emp_name<<endl;
        cout<<"designation = "<<designation<<endl;
        cout<<"department = "<<department<<endl;
        cout<<"salary = "<<salary<<endl;
        }

    }
    void FETCH_ODD()
    {
        if(emp_no%2!=0)
        {
            cout<<"Odd index num"<<endl;
        cout<<"employe no = "<<emp_no<<endl;
        cout<<"employee name = "<<emp_name<<endl;
        cout<<"designation = "<<designation<<endl;
        cout<<"department = "<<department<<endl;
        cout<<"salary = "<<salary<<endl;
        }

    }



};
int main()
{
    emp obj[5];
    for(int i=0;i<5;i++)
    {
        obj[i].GET_DATA();
        
    }
    for(int i=0;i<5;i++)
    {
        obj[i].DISPLAY();
        
    }
    for(int i=0;i<5;i++)
    {
        obj[i].FETCH_EVEN();
        
    }
    for(int i=0;i<5;i++)
    {
        obj[i].FETCH_ODD();
        
    }
    


    return 0;
}