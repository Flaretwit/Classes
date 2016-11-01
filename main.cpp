#include <vector>
#include <iostream>
#include <cstring>
#include "videogames.h"
#include "music.h"
#include "movies.h"
//main.cpp
#define ADD 1;
#define SEARCH 2;
#define QUIT 3;
using namespace std;

int main() {
	char input[10];
	bool continue = true;

	while(continue) {
		
	}
	vector<Media*> storage;

	
	cout << "Enter the artist";
	cin >> input;
	int year = 2000;
	float rating = 7.9;
	Movies* m = new Movies(input, input, year, rating, rating);
	cout << m->getRating();
	

	
return 0;
}



int parseCommand(char *input) {
	if(!strcmp(input, "ADD")) {
		return ADD;
	}
	else if(!strcmp(input, "SEARCH")) {
		return SEARCH;
	}
	else if(!strcmp(input, "QUIT")) {
		return QUIT;
	}
	else {
		return 0;
	}
}

