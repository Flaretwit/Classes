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

void Music::setDuration(int newduration) {
	duration = newduration;
}
void Music::setPublisher(char* newpublisher) {
	publisher = newpublisher;
}

char* Music::getInfo() {
	char *info = new char[200];
	strcpy(info, title);
	strcat(info, ", ");
	strcat(info, artist);
	strcat(info, ", ");
	strcat(info, iota(year));
	strcat(info, ", ");
	strcat(info, iota(duration));
	strcat(info, ", ");
	strcat(info, publisher);

	return info;

}


