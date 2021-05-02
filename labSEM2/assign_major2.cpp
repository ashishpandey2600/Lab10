/*Q2. Suppose you have to simulate “coin tossing”. For 
each toss of the coin, the program should print Heads or
 Tails. Let the program toss the coin 100 times and count 
 the number of times each side of the coin appears. Print 
 the results. The program should call a separate function 
 flip that takes no arguments and returns 0 for tails and 
 1 for heads. [Note: If the program realistically simulates 
 the coin tossing, then each side of the coin should appear 
 approximately half the time.]*/
#include<iostream>
#include<cstdlib>
using namespace std;
int flip()
{
    return rand()%2;
    
}

int main()
{
    int head=0,tails=0;
    for(int i=0;i<100;i++)
    {
        if(flip())
        {
            cout<<"Head"<<endl;
            cout<<flip()<<endl;
            head++;
        }
        else{
        cout<<"Tails"<<endl;
            cout<<flip()<<endl;

        tails++;}
    }
    cout<<head<<"  times head appers "<<endl;
    cout<<tails<<" times tails appers "<<endl;

    return 0;
}