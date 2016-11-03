#include <iostream>
#include <string.h>
#include "music.h"
//music.cpp

using namespace std;

Music::Music(char* newtitle, char* newartist, int newyear, float newduration, char* newpublisher) {
	title = newtitle;
	artist = newartist;
	year = newyear;
	duration = newduration;
	publisher = newpublisher;
}

char* Music::getArtist() {
	return artist;
}

float Music::getDuration() {
	return duration;
}

char* Music::getPublisher() {
	return publisher;
}

void Music::setArtist(char* newartist) {
	artist = newartist;
}

void Music::setDuration(float newduration) {
	duration = newduration;
}
void Music::setPublisher(char* newpublisher) {
	publisher = newpublisher;
}


