#include <vector>
#include <iostream>
#include <cstring>
#include "videogames.h"
#include "music.h"
#include "movies.h"
//main.cpp
#define ADD 1
#define SEARCH 2
#define QUIT 3
#define MOVIE 4
#define VIDEOGAME 5
#define MUSIC 6

using namespace std;

int whatType();
int parseCommand(char* input);
char* getInput();
void addEntry(vector<Media*> *storage, int type);
void search(vector<Media*> *storage);

int main() {
	char input[10];
	bool continueon = true;
	cout << "Storage Facility. Store information about your videogames, movies and music." << endl;
	vector<Media*> *storage = new vector<Media*>();
	while(continueon) {
		cout << "What would you like to do? (ADD, SEARCH, or QUIT)";
		cin >> input;
		switch(parseCommand(input)) {
			case ADD:
				addEntry(storage, whatType());
				break;
			case 0:
				cout << "That's not a valid command." << flush;
				break;		
		}
	}
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
	else if(!strcmp(input, "VIDEOGAME")) {
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
	}	       
	return input;	

}
//Adds a media to the list. 
void addEntry(vector<Media*> *storage, int type) {
	switch(type) {
		case MOVIE:
			int year;
			float rating;
			float duration;
			Movies *m = new Movies();
			cout << "Title: " << flush;
			m->setTitle(getInput());
			cout << "Year: " << flush;
			cin >> year;
			m->setYear(year);
			cout << "Director: " << flush;
			m->setDirector(getInput());
			cout << "Duration: " << flush;
			cin >> duration;
			m->setDuration(duration);
			cout << "Rating: " << flush;
			cin >> rating;
			m->setRating(rating);

			storage->push_back(m);
			cout << "Movie added." << endl;
			break;
		case VIDEOGAME:
			int year;
			float rating;
			VideoGames *vg = new VideoGames();
			cout << "Title: " << flush;
			vg->setTitle(getInput());
			cout << "Year: " << flush;
			cin >> year;
			vg->setYear(year);
			cout << "Publisher: " << flush;
			vg->setPublisher(getInput());
			cout << "Rating: " << flush;
			cin >> rating;
			vg->setRating(rating);
			storage->push_back(vg);
			cout << "Videogame added." << endl;
			break;
		case MUSIC:
			float duration;
			int year;
			
			Music *mu = new Music();
			cout << "Title: " << flush;
			mu->setTitle(getInput());
			cout << "Artist: " << flush;
			mu->setArtist(getInput());
			cout << "Year: " << flush;
			cin >> year;
			mu->setYear(year);
			cout << "Duration: " << flush;
			cin >> duration;
			mu->setDuration(duration);
			cout << "Publisher: " << flush;
			mu->setPublisher(getInput());
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

