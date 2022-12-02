
 //William Wong
 //12/1/22
 //Setters and Getters for Videogames 

 #include <iostream>
 #include <cstring>
 #include "videogames.h"
 using namespace std;

 void Videogames::setPublisher(char* publisher1) {
   strncpy(publisher, publisher1, 100);
 }

 void Videogames::setRating(int rating1) {
   rating = rating1;
 }

 char* Videogames::getPublisher() {
   return publisher;
 }

 int Videogames::getRating() {
   return rating;
 }

 //Here below, helps to print out the title, publisher, rating etc.. 

 void Videogames::print() { 
   cout << "Title: " << title << endl;
   cout << "Publisher: " << publisher << endl;
   cout << "Year Published: " << year << endl;
   cout << "Rating: " << rating << endl;
 }
