
#include <iostream>
#include <string.h>
#include "videogames.h"

//videogames.cpp
using namespace std;


VideoGames::VideoGames() : Media() {
	title = new char[80];
	year = 0;
	publisher = new char[80];
	rating = 0;
}

char* VideoGames::getInfo() {
	char* info = new char[200];
	strcpy(info, title);
	strcat(info, ", ");
	strcat(info, convert(year));
	strcat(info, ", ");
	strcat(info, publisher);
	strcat(info, ", ");
	strcat(info, convert(rating));
	strcat(info, " stars");
	return info;
}

char* VideoGames::getTitle() {
	return title;
}

int VideoGames::getYear() {
	return year;
}

char* VideoGames::getPublisher() {
	return publisher;
}
int VideoGames::getRating() {
	return rating;
}

void VideoGames::setRating(int newrating) {
	rating = newrating;
}

void VideoGames::setPublisher(char *newpublisher) {
	publisher = newpublisher;
}





