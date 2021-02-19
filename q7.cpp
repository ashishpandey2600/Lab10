

//  7. Write the function strend(s,t), which returns 1 if the string t occurs at the end of
    // the string s, and zero otherwise.
    // Sample Test case1: Input:
    // s=”Object Oriented Programming using C++”
    // t=”Using C++” Output: 1
    // Sample Test case2: Input:
    // s=”Object Oriented Programming using C++”
    // t=”Programming” Output: 0
    #include<iostream>
    #include <string.h>
    using namespace std;
   

  int strend(const char *s1, const char *s2)
{
    size_t l1 = strlen(s1);
    size_t l2 = strlen(s2);
    return l2 <= l1 && memcmp(s2, s1 + l1 - l2, l2) == 0;
}

    int main()
     { 
         char s[100],t[100];
         cout<<"Enter the string s\n";
         cin.getline(s,100);
         cout<<"Enter the string t\n";
       cin.getline(t,100);
        cout<< strend(s,t);
         
        
       return 0;
    
       }  