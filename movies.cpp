
 //William Wong                                                                
 //12/1/22
 //Setters/Getters for Mr.Movies

 #include <iostream>
 #include <cstring>
 #include "movies.h"
 using namespace std;

 void Movies::setDirector(char* director1) {
   strncpy(director, director1, 100);
 }

 void Movies::setDuration(int duration1) {
   duration = duration1;
 }

 void Movies::setRating(int rating1) {
   rating = rating1;
 }

 char* Movies::getDirector() {
   return director;
 }

 int Movies::getDuration() {
   return duration;
 }

 int Movies::getRating() {
   return rating;
 }

 //Helps to print initial title of title, director, year published etc... 
 void Movies::print() { 
   cout << "Title: " << title << endl;
   cout << "Director: " << director << endl;
   cout << "Year Published: " << year << endl;
   cout << "Length --> Mins: " << duration << endl;
   cout << "Rating: " << rating << endl;
 }
