#include <string.h>
#include <iostream>
#include "Media.h"
//music.h

using namespace std;

class Music: public Media {
	public:
		Music();
		Music(char*, char*, int, float);
		char* getTitle();
		char* getArtist();
		int getYear();
		float getDuration();
	private:
		char* artist;
		float duration;
};
