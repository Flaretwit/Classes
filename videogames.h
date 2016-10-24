#include <iostream>
#include <string.h>

using namespace std;

class VideoGames{
	public:
		VideoGame(char*, int*, char*, float*)
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
