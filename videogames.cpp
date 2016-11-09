
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

char* VideoGames::getTitle() {
	return title;
}

int VideoGames::getYear() {
	return year;
}

char* VideoGames::getPublisher() {
	return publisher;
}
float VideoGames::getRating() {
	return rating;
}

void VideoGames::setRating(float newrating) {
	rating = newrating;
}

void VideoGames::setPublisher(char *newpublisher) {
	publisher = newpublisher;
}





