#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <string.h>
//Media.h file

class Media {
	public:
		Media();
		char* getTitle();
		int getYear();
		void setYear(int );
		void setTitle(char*);
		virtual char* getInfo();
		char* convert(int );
	protected:
		char* title;
		int year;
};

#endif
