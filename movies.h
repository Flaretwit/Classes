#include <iostream>
#include <string.h>
#include "Media.h"
//Movies.h

using namespace std;

class Movies: public Media {
	public:
		Movies();
		char* getTitle();
		char* getDirector();
		int getYear();
		int getDuration();
		int getRating();
		void setDirector(char*);
		void setDuration(int);
		void setRating(int);
		char* getInfo();
		
	private:
		char* director;
		int duration;
		int rating;

};
