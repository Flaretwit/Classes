#include <iostream>
#include <string.h>
//videogame.h file
using namespace std;

class VideoGame: public Media{
	public:
		VideoGame(char*, int*, char*, float*);
		char* getTitle();
		int* getYear();
		char* getPublisher();
		float* getRating();
	private:
		char* title;
		int* year;
		char* publisher;
		float* rating;
	
};
