
#include <iostream>
#include <string.h>
#include "Media.h"
//videogames.h file

using namespace std;

class VideoGames: public Media{
	public:
		VideoGames();
		~VideoGames();
		char* getTitle();
		int getYear();
		char* getPublisher();
		int getRating();
		void setPublisher(char*);
		void setRating(int);
		char* getInfo();
	private:
		char* publisher;
		int rating;
	
};

//random comment
