
#include <iostream>
#include <string.h>
#include "videogames.h"

//videogames.cpp
using namespace std;


VideoGames::VideoGames(char* newtitle, int newyear, char* newpublisher, float newrating) {
	title = newtitle;
	year = newyear;
	publisher = newpublisher;
	rating = newrating;
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




