
 //William Wong
 //12/1/22
 //Getters and Setters are shown below!

 #include <iostream>
 #include <cstring>
 #include "media.h"
 using namespace std;

 void Media::setTitle(char* title1) {
   strncpy(title, title1, 100);
 }

 void Media::setYear(int year1) {
   year = year1;
 }

 char* Media::getTitle() {
   return title;
 }

 int Media::getYear() {
   return year;
 }

 //Media types are printed below here

 void Media::print() { 
  
 }
