#include <iostream>
#include <string.h>
#include "Media.h"
//Movies.h

using namespace std;

class Movies: public Media {
	public:
		Movies();
		Movies(char*, char*, int, float, float);
		char* getTitle();
		char* getDirector();
		int getYear();
		float getDuration();
		float getRating();
	private:
		char* director;
		float duration;
		float rating;

};
