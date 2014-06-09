/* 
 * File:   main.cpp
 * Author: Kamron Golbaf
 *Project1
 * Created on June 04, 2014, 11:42 PM
 */
 
#ifndef SCORES_H_
#define SCORES_H_
#include <string>
using namespace std;

class Scores
{
	public:
		Scores();
		//this is the defualt constructor for the scores class
		
		Scores(const Scores &anObject);
		//this is the copy constructor for the scores class
		
		Scores operator=(const Scores &anObject);
		//this is the overloaded operator for the scores class
		
		Scores(int game_attempts, std::string game_level);
		//a constructor that takes in the number of attempts
		//	it took to beat the game and the current level of game play
		
		virtual ~Scores();
		//this is the destructor for the scores class
		//there are not any vairables to destroy but thisis still placed here anyways
		
		void set_level(std::string game_level);
		//sets the level of the game that the user is currently palying at
		
		std::string get_level() const;
		//returns the current level of the game that the user is currently playing at
		
		void set_attempts(int game_attempts);
		//sets the attempts that it took the user to beat the game
		
		int get_attempts() const;
		//returns the numbers of attempts that it took the user to beat the game
		
	private:
		std::string level;
		int attempts;
};

#endif

