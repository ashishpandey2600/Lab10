#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class multi
{
    public:
    int a;
    int b;int c,d,e;
    void all()
    {
        cout<<"";
    }
};
 int ran() //rand funtion to produce random integer
    {  int z;
       srand(time(0));
       z=1+(rand()%9);
       return z;
        
    }
    
    int big_2rand()
    {
        int z=10;
       srand(time(0));
       z=rand()%10;
       return z;


    }
    int big_3rand()
    {
       srand(time(0));
        int z;
       z=10+rand()%98;
       return z;


    }
    int big_4rand()
    {
        int z;
       srand(time(0));
       z=100+rand()%1000;
       return z;


    }
    
  void ques_gen(int a,int b)
    {   int correct=0,d; double perc=7.5;
        cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;
        cout<<" = ";
        cin>>d;
        if(a*b!=d)
        { while (a*b!=d)
            {   cout<<" No. Please try again. "<<endl;
                cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;
                cout<<" = ";
                cin>>d;
            }
        }
        else{
        cout<<" Very good! "<<endl;
        correct++;
        }
        
        if(correct>=perc){
        cout<<" Congratulations, you are ready to go to the next level! "<<endl;
    }
    }
int main()
{

    multi m[10];
    int Level=0;
    for(int i=0;i<10;i++)
    {  int j;
        if(Level==1){
        
        m[i].c=big_3rand();}
        cout<<m[i].a<<endl;
        if(Level==2)
        m[i].b=big_2rand();
        if(Level==3)
        m[i].c=big_3rand();
        if(Level==4)
        m[i].d=big_4rand();
    }
       for(int i=0;i<10;i++)
       {
       ques_gen( m[i].a,m[i].b);//for level one
       }
       for(int i=0;i<10;i++)
       {
       ques_gen( m[i].b ,m[i].b);//for level two
       }
       for(int i=0;i<10;i++)
       {
       ques_gen( m[i].c ,m[i].b);//for level three
       }
       for(int i=0;i<10;i++)
       {
       ques_gen( m[i].c ,m[i].d);//for level four
       }
    return 0;
}