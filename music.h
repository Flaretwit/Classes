#include <string.h>
#include <iostream>
#include "Media.h"
//music.h

using namespace std;

class Music: public Media {
	public:
		Music();
		char* getArtist();
		float getDuration();
		char* getPublisher();
		void setArtist(char* );
		void setDuration(int);
		void setPublisher(char* );
		char* getInfo();
	private:
		char* artist;
		int duration;
		char* publisher;
};
