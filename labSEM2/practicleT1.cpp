/*void gradeMe(student m)z*/
#include<iostream>
using namespace std;
class student
{
    private:
    int adm;
    string name;
    int marks;
    string grade;
 
    public:
  
    void Enter() {
        cout<<"Enter the admission nuber "<<endl;
        cin>>adm;
        cout<<"Enter the Student Name "<<endl;
        cin>>name;
        cout<<"Enter the Aggregate Marks "<<endl;
        cin>>marks;
        cout<<grade;
        
        
    }
 
      friend void gradeMe(student );
    void RESULT()
    {
        cout<<"Admission no = "<<adm<<endl;
        cout<<"student Name = "<<name<<endl;
        cout<<"marks = "<<marks<<endl;
        cout<<"grade = "<<grade<<endl;
    }
};
void gradeMe(student m)
{ 

    if(m.marks>=80)
    {
        m.grade='A';

    }
   else if(m.marks<80&&m.marks>=65)
    {
       m.grade='B';
    }
    else if(m.marks<65&&m.marks>=55)
    {
        m.grade='C';
    }
    else if(m.marks<50)
    {
        m.grade='D';
    }
    

}
int main()
{
    student obj;
    obj.Enter();
    gradeMe(obj);
    obj.RESULT();


    return 0;
}