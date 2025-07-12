#include <iostream>
using namespace std;

int getScore();
char findGrade(int score);
void printResult(int score, char grade);

main() {
	int score;
	char c;

	score = getScore();
	c = findGrade(score);
	printResult(score, c);

}

int getScore()