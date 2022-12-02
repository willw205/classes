
 //William Wong
 //12/1/22
 //Defining Setters/Variables/Getters for Mrs.Music 

 #include <iostream>
 #include "media.h"
 using namespace std;

 class Music:public Media{
  public:
   void setArtist(char*);
   void setDuration(int);
   void setPublisher(char*);
   int getDuration();
   int duration;
   char* getArtist();
   char* getPublisher();
   char artist[100];
   char publisher[100];
   void print();
 };
