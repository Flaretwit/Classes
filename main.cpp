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
#define MOVIE 4;
#define VIDEOGAME 5;
#define MUSIC 6;

using namespace std;

parseCommand(char* input);

int main() {
	char input[10];
	bool continue = true;
	cout << "Storage Facility. Store information about your videogames, movies and music." << endl;

	while(continue) {
		cout << "What would you like to do? (ADD, SEARCH, or QUIT)";
		cin >> input;
		switch(parseCommand(input)) {
			case ADD:
				

				
		}
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
	for(int i = 0; input[i]; i++) {
		input[i] = toupper(input[i]);
	}
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

int whatType() {
	char input[80];
	cout << "What kind of media do you want to add? (Movie, Videogame or Music)" << endl;
	cin >> input;
	//changes everything to uppercase
	for(int i = 0; input[i]; i++) {
		input[i] = toupper(input[i]);
	}
	if(!strcmp(input, "MOVIE")) {
		return MOVIE;		
	}
	else if(!strcmp(input, "MUSIC")) {
		return MUSIC;
	}
	else if(!strmp(input, "VIDEOGAME")) {
		return VIDEOGAME;
	}
	else {
		return 0;
	}
}

char* getInput() {
	char *input = new char[80];
	bool valid = false;
	while(valid == false) {
		cin.getline(input, 80);	
		valid = true;
	       if(cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please enter in nontroll input.";
			valid = false;			
	       }	       
	return input;
	
}
//Adds a media to the list. 
void addEntry(vector<Media*> *storage, int type) {
	switch(type) {
		case MOVIE:
			Movie m;
			cout << "Title: " << flush;
			m->getTitle() = getInput();
			cout << "Year: " << flush;
			cin >> m->getYear();
			cout << "Director: " << flush;
			m->director = getInput();
			cout << "Duration: " << flush;
			cin >> m->duration;
			cout << "Rating: " << flush;
			cin >> m->rating;
			storage->push_back(m);
			cout << "Movie added." << endl;
			break;
		case VIDEOGAME:
			VideoGame vg;
			cout << "Title: " << flush;
			vg->title = getInput();
			cout << "Year: " << flush;
			cin >> vg->year;
			cout << "Publisher: " << flush;
			vg->publisher = getInput();
			cout << "Rating: " << flush;
			cin >> vg->rating;
			storage->push_back(vg);
			cout << "Videogame added." << endl;
			break;
		case MUSIC:
			Music m;
			cout << "Title: " << flush;
			m->getTitle() = getInput();
			cout << "Artist: " << flush;
			m->artist = getInput();
			cout << "Year: " << flush;
			cin >> m->getYear();
			cout << "Duration: " << flush;
			cin >> m->duration;
			cout << "Publisher: " << flush;
			m->publisher = getInput();
			storage->push_back(m);
			cout << "Music added." << endl;
			break;
		case 0:
			cout << "That's not a valid type of media." << endl;
			break;

		}	
}

void search(vector<Media*> *storage) {
	
}

