#include <iostream>
#include <string.h>
#include "Media.h"
//Media.cpp

using namespace std;

Media::Media() {
	title = new char[80];
	year = 0;
}
char* Media::getTitle() {
	return title;
}

int Media::getYear() {
	return year;
}

void Media::setYear(int newyear) {
	year = newyear;
}

void Media::setTitle(char* newtitle) {
	title = newtitle;
}
