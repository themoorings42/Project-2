//
//

#ifndef HIGHSCORES_H_
#define HIGHSCORES_H_
#include <string>
//using namespace std;

class HighScores{
	public:
		~HighScores();
		HighScores();
		HighScores(const HighScores &object);
		void operator=(const HighScores &object);
		void set_initials(const char* array);
		void set_initials(char* array);
		char* get_initials();
		char get_initials(int index);
		void set_level(std::string level);
		std::string get_level();
		void set_attempts(int attemtps);
		int get_attempts();

	private:
		char initials[3];
		std::string level;
		int attempts;
		static int initials_size;
};

#endif

