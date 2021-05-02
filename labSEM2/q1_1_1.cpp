#include<iostream>
using namespace std; //work on progres
class student {
    public:
    int total_marks;
    int highest_marks;
    int roll_no;
    int arr_subMarks[300];
    int present_total;
    int prive_total;
    int num_stu;
    int sub_markNow;
    int sub_marks;
    int sub_rollno[100];
    int arr_highSub[100];
    int sum_marks;
    int sum_arr[100];
    int arr_marksNow[100];
    
    void input()
    { prive_total=0;
      present_total=0;
      sub_markNow=0;
      

        for(int i=0;i<2;i++)
        {
            cout<< "student no. : "  <<i+1<<"  "<<endl;
            cout<< "Roll No. = ";
            cin>>  roll_no;


            for(int j=0;j<4;j++){

            cout<< "subject "<<j+1<<" : ";
            cin>>arr_subMarks[j];
            sub_marks=arr_subMarks[j];
            if(sub_marks>sub_markNow)
            {
                sub_markNow=arr_subMarks[j];
                arr_marksNow[j]=arr_subMarks[j];//
                
            }


            for(int l=0;l<=j;l++)
            {
               arr_highSub[l]=sub_markNow;
               sub_rollno[l]=roll_no;
            }
            present_total+=arr_subMarks[j];
            sum_arr[i]=present_total;
            if(present_total>prive_total)
            prive_total+=present_total;
            num_stu=i;//student who obtained hisghest marks
           
            }
             present_total=0;
            
        }

    }
    void display()
    {
        cout<<"PART a"<<endl<<endl;
        for(int i=0;i<4;i++)
        {

            cout<<"student "<<i+1<<" : "<<endl;
            cout<<"Total marks = "<<sum_arr[i];
            cout<<endl;

        }
         cout<<"PART b"<<endl<<endl;
        for(int i=0;i<4;i++)
        {  
             cout<<"highest marks = " <<arr_marksNow[i]<<endl; 
              cout<<"Roll no.= " <<sub_rollno[i]<<endl;
        }
        cout<<"PART b"<<endl;
        cout<<"Student who obtained total highest marks = "<<endl;;
        cout<<num_stu<<endl;
    }

};
int main()
{
    student obj;
    obj.input();
    obj.display();
    



    return 0;
}
