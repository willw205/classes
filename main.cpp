
 //William Wong
 //12/1/22
 //This Project Is Classes! It utilizes that of classes and inheritance
 //Through this program, you will be able to add, search or delete
 //different music, movies, or videogames into the system

 #include <iostream>
 #include <vector>
 #include <cstring>
 #include "videogames.h"
 #include "movies.h"
 #include "media.h"
 #include "music.h"
 #include <iomanip>
 using namespace std;

 //Function Prototypes Shown Below  

 void searchType(vector<Media*> &mediaTypes);
 void addType(vector<Media*> &mediaTypes);
 void deleteType(vector<Media*> &mediaTypes);

 //Below, addType helps to add (Music, Movie, or Video Games into the vector)

 void addType(vector<Media*> &mediaTypes) {
   char choices[50];
   cout << "What Type Will You Add? --> Music or Movie or Video Game" << endl;
   cin.get(choices, 50);
   cin.get();

   //Switches everything to lowercase to avoid any lower case/capitalized errors
   
   for(int i = 0; i < strlen(choices); i++) {

     choices[i] = tolower(choices[i]);
     
   }

   //If the users input is that of music
   //The if statement helps to enter in the data of title, year releases, artist name etc...

   if (strcmp(choices, "music") == 0) { 
     Music* music = new Music();
     
     char title[100];
     cout << "Please Enter Music Title:" << endl;
     cin.get(title, 100);
     cin.get();
     music->setTitle(title);

     int year;
     cout << "Please Enter The Year Released:" << endl;
     cin >> year;
     //ignore helps to ignore/clear characters from the input buffer
     cin.ignore(1, '\n');
     music->setYear(year);

     char artist[100];
     cout << "Please Enter The Artist's Name:" << endl;
     cin.get(artist, 100);
     cin.get();
     music->setArtist(artist);

     int duration;
     cout << "Please Enter Duration Of The Music --> seconds:" << endl;
     cin >> duration;
     cin.ignore(1, '\n');
     music->setDuration(duration);

     char publisher[100];
     cout << "Please Enter The Publishers Name:" << endl;
     cin.get(publisher, 100);
     cin.ignore(1, '\n');
     music->setPublisher(publisher);
     mediaTypes.push_back(music);
   }
   
   //Below helps to enter the movies title, year director, release date etc...
   //if the user chooses the word movie
   
   else if (strcmp(choices, "movie") == 0) { 
     Movies* movie = new Movies();

     char title[100];
     cout << "Please Enter The Movie Title:" << endl;
     cin.get(title, 100);
     cin.get();
     movie->setTitle(title);

     int year;
     cout << "Please Enter The Year The Movie Came Out:" << endl;
     cin >> year;
     cin.ignore(1, '\n');
     movie->setYear(year);

     char director[100];
     cout << "Please Enter The Directors Name:" << endl;
     cin.get(director, 100);
     cin.get();
     movie->setDirector(director);
     
     int duration;
     cout << "Please Enter How Long The Movie is --> mins:" << endl;
     cin >> duration;
     cin.ignore(1, '\n');
     movie->setDuration(duration);

     int rating;
     cout << "Please Enter The Rating You Would Give --> An Integer from 0-10:" << endl;
     cin >> rating;
     cin.ignore(1, '\n');
     if ((rating >= 0) && (rating <= 10)) {
       movie->setRating(rating);
     }
     mediaTypes.push_back(movie);
   }

   //Below else if statement helps to enter the data for the videogames
   //title, year, publisher, and users personal rating
   
   else if (strcmp(choices, "video game") == 0) { 
     Videogames* vidgames = new Videogames();

     char title[100];
     cout << "Please Enter The Title Of The Video game:" << endl;
     cin.get(title, 100);
     cin.get();
     vidgames->setTitle(title);

     int year;
     cout << "Please Enter The Year The Videogame Was Published:" << endl;
     cin >> year;
     cin.ignore(1, '\n');
     vidgames->setYear(year);

     char publisher[100];
     cout << "Please Enter The Publishers Name:" << endl;
     cin.get(publisher, 100);
     cin.get();
     vidgames->setPublisher(publisher);

     int rating;
     cout << "Please provide a rating --> Integer 0-10:" << endl;
     cin >> rating;
     cin.ignore(1, '\n');
     if ((rating >= 0) && (rating <= 10)) {
       vidgames->setRating(rating);
     }
     mediaTypes.push_back(vidgames);
   }
   else {
     cout << "Media Type Unidentified. Please Try Again." << endl;
   }
 }

 void searchType(vector<Media*> &mediaTypes) {
   char choices[50];
   char title[100];

   cout << "What Are You Trying To Search? --> Music or Movie or Video Game" << endl;

   cin.get(choices, 50);
   cin.get();

    for(int i = 0; i < strlen(choices); i++) {

     choices[i] = tolower(choices[i]);

   }

    //Allows the user to look for the music they're looking for
    
    if (strcmp(choices, "music")==0) { 
     cout << "Please Enter Title Of Music You're Searching For" << endl;

     cin.get(title, 100);
     cin.get();

     //Compares title by title to find if the given title is in vector

     for (int i = 0; i < mediaTypes.size(); i++) {
       if (strcmp((mediaTypes.at(i)->title), title) == 0) { 
	 //Helps to print all the data about the specific music 
	 mediaTypes.at(i)->print();
       }
       else { 
  	 cout << "Unidentified Song." << endl;
       }
     }
   }

    //Runs else if statement like music above. Asks user what they're searching for
    //and if movie, then will run the program below
    
   else if (strcmp(choices, "movie")==0) { 
     cout << "Please Enter Title Of The Movie You're Searching For" << endl;

     cin.get(title, 100);
     cin.get();


     //Compares user input to find if the movie title is within the vector 
     
     for (int i = 0; i < mediaTypes.size(); i++) {

       if (strcmp((mediaTypes.at(i)->title), title) == 0) { 
 	 mediaTypes.at(i)->print();
       }
       else {
	 cout << "Unidentified Movie." << endl;
       }
     }
   }

    //Idnetifies if user searches for video game
    
   else if (strcmp(choices, "video game")==0) {
     cout << "Please Enter Title Of The Video Game You're Searching For" << endl;

     cin.get(title, 100);
     cin.get();

     //Runs through vector to find is user given title matches videogame title within vector
     
     for (int i = 0; i < mediaTypes.size(); i++) {
       if (strcmp((mediaTypes.at(i)->title), title) == 0) {
	 //If title matches up all data of the specific videogame is printed out
	 mediaTypes.at(i)->print();
       }
       else { 
	 cout << "Unidentified Video Game." << endl;
       }
     }
   }
 }

 void deleteType(vector<Media*> &mediaTypes) {
   char choices[50];
   char title[100];

   cout << "Please Choose One Of The Types You're Deleting --> Music or Movie or Video Game" << endl;

   cin.get(choices, 50);
   cin.get();

   for(int i = 0; i < strlen(choices); i++) {

     choices[i] = tolower(choices[i]);
     
   }

   //If user writes out music they will be deleting a certain music withint the vector

   if (strcmp(choices, "music")==0) { 
     cout << "Please Enter The Title Of The Music You're Deleting" << endl;

     cin.get(title, 100);
     cin.get();

     //Below we check if the title of the music is within vector
     
     for (int i = 0; i < mediaTypes.size(); i++) {
       if (strcmp((mediaTypes.at(i)->title), title) == 0) {
	 //If titles matches up we use pop back in order to remove elements
	 //from a vector from the back
	 mediaTypes.pop_back();
	 cout << title << " is Deleted from the System!!" << endl;
       }
       else { // 
	 cout << "Unidentified Music." << endl;
       }
     }
   }

   //If user writes out movie they will be deleting a certain movie within the vector 
   
   else if (strcmp(choices, "movie")==0) { 
     cout << "Please Enter Title Of Movie You're Deleting" << endl;

     cin.get(title, 100);
     cin.get();

     //Checks if the specific movie is within the vector
     
     for (int i = 0; i < mediaTypes.size(); i++) {
       //If specific title is found we shall delete!
       if (strcmp((mediaTypes.at(i)->title), title) == 0) {
	 mediaTypes.pop_back();
	 cout << title << " is Deleted!!" << endl;
       }
       else { 
	 cout << "Unidentified Movie." << endl;
       }
     }
   }

   else if (strcmp(choices, "video game")==0) { // video game
     cout << "Please Enter Title Of The Video Game You're Deleting" << endl;

     cin.get(title, 100);
     cin.get();

     //If user writes out video game they will be deleting a certain
     //video game within the vector  

     for (int i = 0; i < mediaTypes.size(); i++) {
       //If specific video game title is found, we shall delete!
       if (strcmp((mediaTypes.at(i)->title), title) == 0) { 
	 mediaTypes.pop_back();
	 cout << title << " is Deleted!!" << endl;
       }
       else { 
	 cout << "Unidentified Video Game." << endl;
       }
     }
   }
 }

 int main() {

   vector<Media*> mediaTypes;
   char input[100];
   bool running = true;

   //while loop will run all functions repatedly until user decides to quit     

   while (running == true) {
     cout << " " << endl;
     cout << "Please choose one of the actions --> Add or Search or Delete or Q\
uit" << endl;

     cin.get(input, 100);
     cin.get();

     for(int i = 0; i < strlen(input); i++) {
       input[i] = tolower(input[i]);
      }
     //Adds a mediaType                                                         
     if (strcmp(input, "add") == 0) {
       addType(mediaTypes);
     }
     //Searches for a media type                                                
     else if (strcmp(input, "search") == 0) {
       searchType(mediaTypes);
     }
     //Deleted a media type                                                     
     else if (strcmp(input, "delete") == 0) {
       deleteType(mediaTypes);
     }
     //Stops the while loop, indicating user is done                            
     else if (strcmp(input, "quit") == 0) {
       cout << "Thanks for Playing! Shutting down..." << endl;
       running = false;
     }
     else {
       cout << "Please type the exact letters" << endl;
     }
   }
 }
