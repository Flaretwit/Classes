#ifndef FLUFFY
#define FLUFFY
#include <iostream>
#include <string.h>
#include "Media.h"
//videogame.h file
//
//
//
using namespace std;

class VideoGame: public Media{
	public:
		VideoGame();
		VideoGame(char*, int*, char*, float*);
		char* getTitle();
		int* getYear();
		char* getPublisher();
		float* getRating();
	private:
		char* publisher;
		float* rating;
	
};


#endif
