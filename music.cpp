#include <iostream>
#include <string.h>
#include "music.h"
//music.cpp

using namespace std;

Music::Music() {
	title = new char[80];
	artist = new char[80];
	year = 0;
	duration = 0;
	publisher = new char[80];
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


