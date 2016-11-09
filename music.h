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
		void setDuration(float);
		void setPublisher(char* );
	private:
		char* artist;
		float duration;
		char* publisher;
};
