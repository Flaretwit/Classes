
#include <iostream>
#include <string.h>
#include "Media.h"
//videogames.h file

using namespace std;

class VideoGames: public Media{
	public:
		VideoGames();
		VideoGames(char*, int, char*, float);
		char* getTitle();
		int getYear();
		char* getPublisher();
		float getRating();
	private:
		char* publisher;
		float rating;
	
};


