/*Q3. Suppose you have to develop small software to assist 
the primary students. Write a program that will help an 
elementary school student learn multiplication. Use the
 rand function to produce two positive one-digit integers. 
 The program should then prompt the user with a question, 
 such as
How much is 6 times 7?
The student then inputs the answer. Next, the program 
checks the student’s answer. If it’s correct, display 
the message "Very good!" and ask another multiplication
 question. If the answer is wrong, display the message "No.
  Please try again." and let the student try the same 
  question repeatedly until the student finally gets it
   right. A separate function should be used to generate 
   each new question. This function should be called once
    when the application begins execution and each time the
     user answers the question correctly.
For making your software more interesting, program 
should display various comments for each answer as follows:
Possible responses to a correct answer:
Very good!
Excellent!
Nice work!
Keep up the good work!
Possible responses to an incorrect answer: No. Please 
try again.
Wrong. Try once more. Don't give up!
No. Keep trying.
Use random-number generation to choose a number from
 1 to 4 that will be used to select one of the four 
 appropriate responses to each correct or incorrect answer.
  Use a switch statement to issue the responses.
To make you software more sophisticate, system should 

monitor the student’s performance over a period of time. 
The decision to begin a new topic is often based on the 
student’s success with previous topics. System should count
 the number of correct and incorrect responses typed by the 
 student. After the student types 10 answers, your program
  should calculate the percentage that is correct. If the 
  percentage is lower than 75%, display "Please ask your
   teacher for extra help.", then reset the program so another
    student can try it. If the percentage is 75% or higher,
    display "Congratulations, you are ready to go to 
   the next level!", then reset the program 
   so another student can try it. System should support various
    difficulty levels. At a difficulty level of 1, the program should use only 
   single-digit numbers in the problems; at a difficulty level of 2,
    numbers as large as two digits, and so on.*/

    #include<iostream>
    #include<cstdlib>
    #include<ctime>
    using namespace std;
    int ran() //rand funtion to produce random integer
    {  int z;
       srand((unsigned)time(0));
       z=(rand()%9)+1;
       return z;
        
    }
    
    int big_2rand()
    {
        int z;
       z=rand()%10;
       return z;


    }
    int big_3rand()
    {
        int z;
       z=10+rand()%99;
       return z;


    }
    int big_4rand()
    {
        int z;
       z=100+rand()%1000;
       return z;


    }
    
    void ques_gen(int a,int b)
    {
        cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;

    }
    int main()
    {   
        int a,b,c,d,correct=0,level=1,choice=1,etc;
        float perc=7.5;
        l:
       
        switch(choice) //switch case for levels
        {   
         case 1:
         cout<<"LEVEL 1"<<endl;
         for(int i=0;i<10;i++){ //for loop for test question
         a=ran(); //geting first random value
         b=big_2rand();//getting second random value
           

         cout<<i+1<<" : "; //question number
          ques_gen(a,b); // asking question by the funtion as mentioned in ques
          cout<<" = ";
          cin>>d;// user input
        if(a*b!=d)// if ans is wrong
        {
             // untill user not enter the right answer
              etc=ran(); // for various statment random value
                switch (etc){ 
                case 1 ... 3 :
                cout<<" Wrong. Try once more. "<<endl;
                cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;
                break;
                case 4 ... 7 : while(a*b!=d){
               cout<< "No. Please try again."<<endl;
               cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;}
               break;
               case 8 :while(a*b!=d){
               cout<<"Wrong. Try once more. Don't give up!"<<endl;
               cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;
               }
               break;
               case 9: while(a*b!=d){
                cout<<"No. Keep trying."<<endl;
                cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;
               
                }
            }
        }
        else if (a*b==d){ etc=ran(); correct++;  //if ans is correct ...
            switch(etc){

        case 1 ... 3 :
        cout<<"Very good! "<<endl;
        break; //various statment respect to random values
        case 4 ... 6 :
        cout<<"Excellent!"<<endl;
        break;
        case 7 ... 8 :
        cout<<"Nice work!"<<endl;
        break;
        case 9:
        cout<<"Keep up the good work!"<<endl;
        break;
         // incremention of correct anaylys how many are correct
        }
        }
        }
        if(correct>=perc){
        cout<<" Congratulations, you are ready to go to the next level! "<<endl;
        cout<<endl<<endl<<endl;
        cout<<"press 1 to play again RESET  level 1"<<endl;
        cout<<"press 2 for Level 2"<<endl;
        cin>>choice; //for level any up coming level
        if (choice ==1)
        goto l; // if user wants to reset  executing program again
                 
        }
        else
        cout<<" Please ask your teacher for extra help ";
        a=0,b=0,c=0,d=0,correct=0; //reset part






            case 2: 
            cout<<"LEVEL 2 :"<<endl;
        for(int i=0;i<10;i++){
            
         a=big_3rand();//make a funtion which  give two digit number
         b=big_2rand();//same here do that 
         
        
          ques_gen(a,b);

          cin>>d;
        if(a*b!=d)// if ans is wrong
        {
             // untill user not enter the right answer
              etc=ran(); // for various statment random value
                switch (etc){ 
                case 1 ... 3 :
                cout<<" Wrong. Try once more. "<<endl;
                cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;
                break;
                case 4 ... 7 : while(a*b!=d){
               cout<< "No. Please try again."<<endl;
               cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;}
               break;
               case 8 :while(a*b!=d){
               cout<<"Wrong. Try once more. Don't give up!"<<endl;
               cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;
               }
               break;
               case 9: while(a*b!=d){
                cout<<"No. Keep trying."<<endl;
                cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;
               
                }
            }
        }
         else if (a*b==d){ etc=ran(); correct++;  //if ans is correct ...
            switch(etc){

        case 1 ... 3 :
        cout<<"Very good! "<<endl;
        break; //various statment respect to random values
        case 4 ... 6 :
        cout<<"Excellent!"<<endl;
        break;
        case 7 ... 8 :
        cout<<"Nice work!"<<endl;
        break;
        case 9:
        cout<<"Keep up the good work!"<<endl;
        break;
       // incremention of correct anaylys how many are correct
        }
        
        }
        }
        if((correct/10)*100>=perc){
        cout<<" Congratulations, you are ready to go to the next level! "<<endl;
        cout<<endl<<endl<<endl;
        cout<<"press 3 for Level 2"<<endl;
        cin>>choice;
        }
        else
        cout<<" Please ask your teacher for extra help ";





        case 3:
        cout<<"LEVEL 3"<<endl;
        for(int i=0;i<10;i++){
         a=big_3rand();
         b=big_3rand(); 
         ques_gen(a,b);

         cin>>d;
        if(a*b!=d)// if ans is wrong
        {
             // untill user not enter the right answer
              etc=ran(); // for various statment random value
                switch (etc){ 
                case 1 ... 3 :
                cout<<" Wrong. Try once more. "<<endl;
                cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;
                break;
                case 4 ... 7 : while(a*b!=d){
               cout<< "No. Please try again."<<endl;
               cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;}
               break;
               case 8 :while(a*b!=d){
               cout<<"Wrong. Try once more. Don't give up!"<<endl;
               cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;
               }
               break;
               case 9: while(a*b!=d){
                cout<<"No. Keep trying."<<endl;
                cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;
               
                }
            }
        }
         else if (a*b==d){ etc=ran(); correct++;  //if ans is correct ...
            switch(etc){

        case 1 ... 3 :
        cout<<"Very good! "<<endl;
        break; //various statment respect to random values
        case 4 ... 6 :
        cout<<"Excellent!"<<endl;
        break;
        case 7 ... 8 :
        cout<<"Nice work!"<<endl;
        break;
        case 9:
        cout<<"Keep up the good work!"<<endl;
        break;
        correct++; // incremention of correct anaylys how many are correct
        }
        }
        }
        if((correct/10)*100>=perc){
        cout<<" Congratulations, you are ready to go to the next level! "<<endl;
        cout<<endl<<endl<<endl;
        cout<<"press 4 for Level 4"<<endl;
        cin>>choice;
        }
        else
        cout<<" Please ask your teacher for extra help ";
        


        case 4: 
        cout<<"LEVEL 4 : "<<endl;
        for(int i=0;i<10;i++){
         a=big_4rand();
         b=big_3rand(); 
         
        
          ques_gen(a,b);

          cin>>d;
       if(a*b!=d)// if ans is wrong
        {
             // untill user not enter the right answer
              etc=ran(); // for various statment random value
                switch (etc){ 
                case 1 ... 3 :
                cout<<" Wrong. Try once more. "<<endl;
                cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;
                break;
                case 4 ... 7 : while(a*b!=d){
               cout<< "No. Please try again."<<endl;
               cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;}
               break;
               case 8 :while(a*b!=d){
               cout<<"Wrong. Try once more. Don't give up!"<<endl;
               cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;
               }
               break;
               case 9: while(a*b!=d){
                cout<<"No. Keep trying."<<endl;
                cout<<" How much is "<<a<<" times "<<b<<" ?? "<<endl;//asking ques again
                 cout<<" = ";
                 cin>>d;
               
                }
            }
        }
         else if (a*b==d){ etc=ran(); correct++;  //if ans is correct ...
            switch(etc){
           
        case 1 ... 3 :
        cout<<"Very good! "<<endl;
        break; //various statment respect to random values
        case 4 ... 6 :
        cout<<"Excellent!"<<endl;
        break;
        case 7 ... 8 :
        cout<<"Nice work!"<<endl;
        break;
        case 9:
        cout<<"Keep up the good work!"<<endl;
        break;
        correct++; // incremention of correct anaylys how many are correct
        }
        }
        }
        if((correct/10)*100>=perc){
        cout<<" Congratulations, you have completed all levels! "<<endl;
        }
        else
        cout<<" Please ask your teacher for extra help ";
        }
        return 0;
        }