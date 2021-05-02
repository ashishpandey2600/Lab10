#include<iostream>
#include<string>

using namespace std;
string * s;
int main()  // use the structure in place of goto
{
    s= new string ; 
    char choice;
    char names[90];
    char *ptr2;
    ptr2=names;
    again:
    cout<<"\nEnter the choice\n 1. press 'A' To insert a student name (if more than one name use space and write name as many u want)\n";
    cout<<"2.. press 'B 'To delete a name\n3.press C To print the names \n press 'N' To exit "<<endl;
        cin>>choice;
    char *ptr;
    ptr=&choice;
    switch (choice)
    {   case 'A' : cin.ignore(); 
                   cout<<"Enter the name"<<endl;
                   cin.getline(ptr2,90);
                   //converting charachter array into string
                   int i; 
                    for (i = 0; i < 90; i++) { 
                    s = s + names[i]; 
    } 
                   goto again;
                    
    
    case 'B':    if(s.empty())
                 cout<<"error no names"<<endl;
                 else  
                 s.clear();
                 goto again;
                
    
    case 'C'  : 
    cout<<s;   
                    goto again;

     case 'N'  : cout<<"thanks visit again ('_')  "  ;
                 break;                          

    }
    return 0 ;
}

