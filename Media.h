#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <string.h>
//Media.h file

class Media {
	public:
		Media();
		virtual ~Media();
		char* getTitle();
		int getYear();
		void setYear(int );
		void setTitle(char*);
		virtual char* getInfo();
		char* convert(int );
		int getType();
		void setType(int );
	protected:
		char* title;
		int year;
		int type;
};

#endif
