// 3. Write a menu driven program (using switch-case) to create a database of student 
// names and perform the following operations using array of character pointers and dynamic 
// memory allocation.
// (A)To insert a student name
// (B) To delete a name (Show Error message if zero names are there in database)
// (C) To print the names
// Note: your program should keep on showing above three options until user enters ‘N’.

//DONE

#include<iostream>
#include<string>
using namespace std;
int main()
{
    char choice;
    string names;
    again:
    cout<<"Enter the choice\n 1. press 'A' To insert a student name (if more than one name use space and write name as many u want)\n";
    cout<<"2.. press 'B 'To delete a name\n3.press C To print the names \n press 'N' To exit "<<endl;
        cin>>choice;
    char *ptr;
    ptr=&choice;
    switch (choice)
    {   case 'A' : cin.ignore(); 
                   cout<<"Enter the name"<<endl;
                   getline(cin,names);
                   goto again;
                    
    
    case 'B':    if(names.empty())
                 cout<<"error no names"<<endl;
                 else  
                 names.clear();
                 goto again;
                
    
    case 'C'  :  cout<<names<<endl;   
                    goto again;

     case 'N'  : cout<<"thanks visit again ('_')  "  ;
                 break;                          

    }


    

    return 0 ;
}

