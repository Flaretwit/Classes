/* Classes: Example of using classes in CPP
 * An inventory system for different types of Media
 * Videogames, Music, and Movies.
 * Error checking may be there
 */

#include <vector>
#include <iostream>
#include <cstring>
#include "videogames.h"
#include "music.h"
#include "movies.h"
//main.cpp
#define DELETE 1
#define ADD 2
#define SEARCH 3
#define QUIT 4
#define MOVIE 5
#define VIDEOGAME 6
#define MUSIC 7

using namespace std;

int whatType();
int parseCommand(char* input);
char* getInput();
void addEntry(vector<Media*> *storage, int type);
void search(vector<Media*> *storage);
void deleteEntry(vector<Media*> *storage);

int main() {
	char input[10];
	bool continueon = true;
	cout << "Storage Facility. Store information about your videogames, movies and music." << endl;
	vector<Media*> *storage = new vector<Media*>();
	while(continueon) {
		cout << "What would you like to do? (ADD, SEARCH, DELETE or QUIT)";
		cin >> input;
		cin.ignore();
		switch(parseCommand(input)) {
			case ADD:
				addEntry(storage, whatType());
				break;
			case SEARCH:
				search(storage);
				break;
			case DELETE:
				deleteEntry(storage);
				break;
			case 0:
				cout << "That's not a valid command." << flush;
				break;		
		}
	}

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
	else if(!strcmp(input, "DELETE")) {
		return DELETE;
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
//Deletes an entry in storage
void deleteEntry(vector<Media*> *storage)  {	
	char *choice;
	cout << "Delete by Title or Year?";
	choice = getInput();
	for(int i = 0; choice[i]; i++) {
		choice[i] = toupper(choice[i]);
	}
	if(!strcmp(choice, "YEAR"))  {
		cout << "What year?";
		int year;
		cin >> year;
		cin.ignore();
		for(int i = 0; i < storage->size(); i++) {
			if(storage->at(i)->getYear() == year) {
				delete storage->at(i);
				storage->erase(storage->begin() + i);
				cout << "Deleted" << flush;
			}
		}
		
	} else if(!strcmp(choice, "TITLE")) {
		cout << "What title?";
		char *input;
		input = getInput();
		for(int i = 0; i < storage->size(); i++) {
			if(!strcmp(storage->at(i)->getTitle(), input)) {
				delete storage->at(i);
				storage->erase(storage->begin() + i);
				cout << "Deleted" << flush;
			}
		}
	}
			
}


//Adds a media to storage
void addEntry(vector<Media*> *storage, int type) {
	cin.ignore();
	switch(type) {
		int year;
		float rating;
		float duration;
		case MOVIE: {
			Movies *m = new Movies();
			//gives the type to the object
			m->setType(MOVIE);
			cout << "Title: " << flush;
			m->setTitle(getInput());
			cout << "Year: " << flush;
			cin >> year;
			cin.ignore();
			m->setYear(year);
			cout << "Director: " << flush;
			m->setDirector(getInput());
			cout << "Duration: " << flush;
			cin >> duration;
			cin.ignore();
			m->setDuration(duration);
			cout << "Rating: " << flush;
			cin >> rating;
			cin.ignore();
			m->setRating(rating);
			storage->push_back(m);
			cout << "Movie added." << endl;
			break;
			}
		case VIDEOGAME:
			{
			VideoGames *vg = new VideoGames();
			vg->setType(VIDEOGAME);
			cout << "Title: " << flush;
			vg->setTitle(getInput());
			cout << "Year: " << flush;
			cin >> year;
			cin.ignore();
			vg->setYear(year);
			cout << "Publisher: " << flush;
			vg->setPublisher(getInput());
			cout << "Rating: " << flush;
			cin >> rating;
			cin.ignore();
			vg->setRating(rating);
			storage->push_back(vg);
			cout << "Videogame added." << endl;
			break;
			}
		case MUSIC: {
			Music *mu = new Music();
			mu->setType(MUSIC);
			cout << "Title: " << flush;
			mu->setTitle(getInput());
			cout << "Artist: " << flush;
			mu->setArtist(getInput());
			cout << "Year: " << flush;
			cin >> year;
			cin.ignore();
			mu->setYear(year);
			cout << "Duration: " << flush;
			cin >> duration;
			cin.ignore();
			mu->setDuration(duration);
			cout << "Publisher: " << flush;
			mu->setPublisher(getInput());
			storage->push_back(mu);
			cout << "Music added." << endl;
			break;
			   }
		case 0:
			cout << "That's not a valid type of media." << endl;
			break;
		}	
}

void search(vector<Media*> *storage) {
	char *choice;
	cout << "Search by Title or Year?";
	choice = getInput();
	for(int i = 0; choice[i]; i++) {
		choice[i] = toupper(choice[i]);
	}
	if(!strcmp(choice, "YEAR"))  {
		cout << "What year?";
		int year;
		cin >> year;
		for(int i = 0; i < storage->size(); i++) {
			if(storage->at(i)->getYear() == year) {
				cout << storage->at(i)->getInfo() << endl;
			}
		}
		
	} else if(!strcmp(choice, "TITLE")) {
		cout << "What title?";
		char *input;
		input = getInput();
		for(int i = 0; i < storage->size(); i++) {
			if(!strcmp(storage->at(i)->getTitle(), input)) {
				cout << storage->at(i)->getInfo() << endl;
			}
		}
	}
}

