#include <iostream>
#include <string.h>
#include "music.h"
//music.cpp

using namespace std;

Music::Music(char* newtitle, char* newartist, int newyear, float newduration) {
	title = newtitle;
	artist = newartist;
	year = newyear;
	duration = newduration;
}

char* Music::getTitle() {
	return title;
}

char* Music::getArtist() {
	return artist;
}

int Music::getYear() {
	return year;
}

float Music::getDuration() {
	return duration;
}
