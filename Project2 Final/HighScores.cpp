/* 
 * File:   main.cpp
 * Author: Kamron Golbaf
 *Project1
 * Created on April 17, 2014, 1:42 PM
 */

#include "HighScores.h"
#include <cstring>
#include <string>
using namespace std;

int HighScores::initials_size = 3;

HighScores::~HighScores()
{
	Scores();
}

HighScores::HighScores()
{
	Scores();
	
	strcpy(initials, "XXX");
}

HighScores::HighScores(std::string game_level, char* game_initials, int game_attempts)
{
	Scores(game_attempts, game_level);
	strcpy(initials, game_initials);
}

HighScores::HighScores(const HighScores &object)
{
	Scores(object.get_attempts(), object.get_level());
	
	for(int i = 0; i < 3; i++)
	{
		initials[i] = object.initials[i];
	}
}

void HighScores::operator=(const HighScores &object)
{
	Scores::operator=(object);
	
	for(int i = 0; i < 3; i++)
	{
		initials[i] = object.initials[i];
	}
}

void HighScores::set_initials(char* array, int i){
		*(initials + i) = *(array + i);
}

void HighScores::set_initials(char* array){
	for(int i = 0; i < 3; i++)
	{
		initials[i] = array[i];
	}
}

void HighScores::set_initials(std::string array){
	for(int i = 0; i < 3; i++)
	{
		initials[i] = array[i];
	}
}

char* HighScores::get_initials()
{
	return initials;
}

char HighScores::get_initials(int index) const
{
	return initials[index];
}

