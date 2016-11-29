#include <iostream>
#include <string.h>
#include "music.h"
#include <sstream>
//music.cpp

using namespace std;
//constructor
Music::Music() {
	title = new char[80];
	artist = new char[80];
	year = 0;
	duration = 0;
	publisher = new char[80];
}
//descructor
Music::~Music() {
	delete title;
	delete artist;
	delete publisher;
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
	strcat(info, title);
	strcat(info, ", ");
	strcat(info, artist);
	strcat(info, ", ");
	strcat(info, convert(year));
	strcat(info, ", ");
	strcat(info, convert(duration));
	strcat(info, " mins");
	strcat(info, ", ");
	strcat(info, publisher);
	return info;
}


