/* 
 * File:   main.cpp
 * Author: Kamron Golbaf
 *Project1
 * Created on April 17, 2014, 1:42 PM
 */

#ifndef HIGHSCORES_H_
#define HIGHSCORES_H_
#include "Scores.h"
#include <string>
using namespace std;

class HighScores : public Scores
{
	public:
		static int initials_size;
		//static member variable used for the max size of the intials member variable
				
		virtual ~HighScores();
		//the destructor for the HighScores class,
		//	there are currently no items or variables to delete, but it is still here
		
		HighScores();
		//the default constructor for the HighScores class
		
		HighScores(std::string game_level, char* game_initials, int game_attempts);
		//a constructor for the HighScores class that takes in the current game
		//	level, the user's initials and the number of attempts it took to beat the game
		
		HighScores(const HighScores &object);
		//this is the copy constructor for the high scores class
		
		void operator=(const HighScores &object);
		//this is the overloaded equals operator for the HighScores class
		
		void set_initials(char* array, int i);
		//set the initials for the users for the high score list at a certain index
		
		void set_initials(char* array);
		//set the initials for the users for the high score list
		
		void set_initials(std::string array);
		//set the initials for the users for the high score list
		
		char* get_initials();
		//returns the intials char array
		
		char get_initials(int index) const;
		//this returns the intials at a certain index for the class variable intials

	private:
		char initials[3];

};

#endif

