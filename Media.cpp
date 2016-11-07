#include <iostream>
#include <string.h>
#include "Media.h"
//Media.cpp

using namespace std;

Media::getTitle() {
	return title;
}

Media::getYear() {
	return year;
}

Media::setYear(int newyear) {
	year = newyear;
}

Media::setTitle(char* newtitle) {
	title = newtitle;
}
