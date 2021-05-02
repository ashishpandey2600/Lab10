// 3. Rewrite the following for statement as an equivalent while statement:
// f o r (i =0 ; i<m a x _ l e n g t h ; i ++) 
// i f (i n p u t _ l i n e [i ] ==  ́? ́)
// q u e s t _ c o u n t ++;
// Rewrite it to use a pointer as the controlled variable, that is, so that 
//the test is of the form *p == ́? ́.



#include<iostream>
using namespace std;
int main()
{ 
    int i=0,max_length,quest_count=0;
    cout<<"Enter max_length"<<endl;
    cin>>max_length;
      char input_line[max_length];
 //using while loop
    while(i<max_length)
    {
        if(input_line[i]=='?')
        quest_count++;
        i++;
    }
    //using pointer
    char *p;
    p=input_line;
    for(int j=0;j<max_length;j++)
    {
        if(*p=='?')
        quest_count++;
        p++;
    }


    return 0;
}
