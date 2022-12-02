
 //William Wong
 //12/1/122
 //Defining Setters/Variables/Getters for Mr.Movie

 #include <iostream>
 #include "media.h"
 using namespace std;

 class Movies:public Media{
 public:
   void setDirector(char*);
   void setDuration(int);
   void setRating(int);
   char* getDirector();
   int getDuration();
   int getRating();
   char director[100];
   int duration;
   int rating;
   void print();
 };
