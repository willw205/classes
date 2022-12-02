
 //William Wong                                                                
 //12/1/22 
 //Header Guards are used to ensure errors are prevented
 //when a function/variable is defined two or more times

 #ifndef MEDIA
 #define MEDIA
 #include <iostream>
 using namespace std;

 //Creating class for media below
 //Getters and Setters

 class Media{
  public:
   void setTitle(char*);
   void setYear(int);
   char* getTitle();
   int getYear();
   virtual void print();
   char title[10];
   int year;
 };

 #endif
