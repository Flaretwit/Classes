#include <iostream>
#include <string.h>
#include "movies.h"
//movies.cpp

using namespace std;

Movies::Movies(char* newtitle, char* newdirector, int newyear, float newduration, float newrating) {
	title = newtitle;
	year = newyear;
	director = newdirector;
	duration = newduration;
	rating = newrating;
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
float Movies::getDuration() {
	return duration;
}
float Movies::getRating() {
	return rating;
}

void Movies::setDirector(char* newdirector) {
	director = newdirector;
}
void Movies::setDuration(float newduration) {
	duration = newduration;
}
void Movies::setRating(float newrating) {
	rating = newrating;
}
