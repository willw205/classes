
 //William Wong
 //12/1/22
 //Setters and Getters for Mrs.Music

 #include <iostream>
 #include <cstring>
 #include "music.h"
 using namespace std;

 void Music::setArtist(char* artist1) {
   strncpy(artist, artist1, 100);
 }

 void Music::setDuration(int duration1) {
   duration = duration1;
 }

 void Music::setPublisher(char* publisher1) {
   strncpy(publisher, publisher1, 100);
 }

 char* Music::getArtist() {
   return artist;
 }

 int Music::getDuration() {
   return duration;
 }

 char* Music::getPublisher() {
   return publisher;
 }

 //Below helps to print out the title, artist, year published title etc...

 void Music::print() { 
   cout << "Title: " << title << endl;
   cout << "Artist: " << artist << endl;
   cout << "Year Published: " << year << endl;
   cout << "Length --> Mins: " << duration << endl;
   cout << "Publisher: " << publisher << endl;

 }
