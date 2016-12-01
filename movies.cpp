#include <iostream>
#include <string.h>
#include "movies.h"
//movies.cpp

using namespace std;

Movies::Movies() {
	title = new char[80];
	year = 0;
	director = new char[80];
	duration = 0;
	rating = 0;
}

Movies::~Movies() {
	delete director;
}

char* Movies::getTitle() {
	return title;
}

char* Movies::getDirector() {
	return director;
}
int Movies::getYear() {
	return year;
}
int Movies::getDuration() {
	return duration;
}
int Movies::getRating() {
	return rating;
}

void Movies::setDirector(char* newdirector) {
	director = newdirector;
}
void Movies::setDuration(int newduration) {
	duration = newduration;
}
void Movies::setRating(int newrating) {
	rating = newrating;
}

char* Movies::getInfo() {
	char *info = new char[200];
	strcpy(info, title);
	strcat(info, ", ");
	strcat(info, convert(year));
	strcat(info, ", ");
	strcat(info, director);
	strcat(info, ", ");
	strcat(info, convert(duration));
	strcat(info, "min");
	strcat(info, ", ");
	strcat(info, convert(rating));
	strcat(info, " stars");

	return info;
}


