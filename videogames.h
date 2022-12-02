
 //William Wong
 //12/1/22
 //Defining Setters/Variables/Getters for videogames 

 #include <iostream>
 #include "media.h"
 using namespace std;

 class Videogames:public Media{
  public:
   
   void setRating(int);
   char* getPublisher();
   void setPublisher(char*);
   int getRating();
   int rating;
   char publisher[100];
   void print();
 };
