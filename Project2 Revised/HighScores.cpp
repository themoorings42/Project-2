//
//

#include "HighScores.h"
#include <cstring>
#include <string>
using namespace std;

int HighScores::initials_size = 3;

HighScores::~HighScores(){
	//delete [] initials;
}

HighScores::HighScores(){
	level = "XXX";
	strcpy(initials, "XXX");
	attempts = 999;
}

HighScores::HighScores(const HighScores &object){
	level = object.level;
	attempts = object.attempts;

	for(int i = 0; i < 3; i++)
		initials[i] = object.initials[i];
}

void HighScores::operator=(const HighScores &object){
	level = object.level;
	attempts = object.attempts;

	for(int i = 0; i < 3; i++)
		initials[i] = object.initials[i];
}

void HighScores::set_initials(const char* array){
	for(int i = 0; i < 3; i++)
		initials[i] = array[i];
}

void HighScores::set_initials(char* array){
	for(int i = 0; i < 3; i++)
		initials[i] = array[i];
}

/*void HighScores::set_initials(int index){
	intitial[
}*/

char* HighScores::get_initials(){
	return initials;
}

char HighScores::get_initials(int index){
	return initials[index];
}

void HighScores::set_level(std::string level){
	level = level;
}

std::string HighScores:: get_level(){
	return level;
}

void HighScores::set_attempts(int attempts){
	attempts = attempts;
}

int HighScores::get_attempts(){
	return attempts;
}
