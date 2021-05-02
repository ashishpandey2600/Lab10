/**/


#include<iostream>
using namespace std;
// title, year, and name of the directo
class movie{
    private:
    string title;
    int year;
    string Director_name;
    public:
    void setTitle(string str)
    {
        title=str;
    }

     void setYear(int a)
     {
         year=a;
     }
      void setDirector(string str2)
      {
          Director_name=str2;
      }
      void DisplayAll(){

      cout<<"Title of the movie is = "<<title<<endl;
      cout<<"Name of director is = "<<Director_name<<endl;
      cout<<"year = "<<year<<endl;
      

          
      }
    

};


int main()
{
    movie myFavoriteMovie;
    myFavoriteMovie.setTitle("dispicable me");
    myFavoriteMovie.setDirector("ashish pandey");
    myFavoriteMovie.setYear(2021);
    myFavoriteMovie.DisplayAll();




    return 0;
}