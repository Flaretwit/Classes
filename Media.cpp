#include <iostream>
#include <string.h>
#include "Media.h"
#include <math.h>
//Media.cpp

using namespace std;

Media::Media() {
	title = new char[80];
	year = 0;
}

Media::~Media() {
	delete title;
}

int Media::getType() {
	return type;
}

void Media::setType(int newtype) {
	type = newtype;
}

char* Media::getInfo() {
	char *input = new char[5];
	return input;
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
	strcpy(title, newtitle);
}
char* Media::convert(int number) {
	char *output = new char[10];
	int index = log10(number);
	output[index+1] = '\0'; 
	while(number > 0) {
		output[index] = (char) (number - number/10 * 10) + '0';
		number /= 10;
		index--;
	}
	
	return output;
}
