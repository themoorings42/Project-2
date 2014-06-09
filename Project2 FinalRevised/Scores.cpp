/* 
 * File:   main.cpp
 * Author: Kamron Golbaf
 *Project1
 * Created on June 04, 2014, 11:42 PM
 */
 
#include "Scores.h"
using namespace std;

Scores::Scores()
{
	level = "XXX";
	attempts = 999;
}

Scores::Scores(const Scores &anObject)
{
	Scores::operator=(anObject);
}

Scores Scores::operator=(const Scores &anObject)
{
	level = anObject.level;
	attempts = anObject.attempts;
}

Scores::Scores(int game_attempts, std::string game_level)
{
	set_level(level);
	set_attempts(attempts);
}

void Scores::set_level(std::string game_level)
{
	level = game_level;
}

std::string Scores:: get_level() const
{
	return level;
}

void Scores::set_attempts(int game_attempts)
{
	attempts = game_attempts;
}

int Scores::get_attempts() const
{
	return attempts;
}

Scores::~Scores()
{
	
}

