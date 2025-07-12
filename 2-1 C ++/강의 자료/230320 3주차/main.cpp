include <iostream>
using namespace std;
//함수 선언
int getScore();
char findGrade(int score);
void printResult(int score, char grade);
int main()
{
	char c;
	int score;
	score = getScore();
	c = findGrade(score);
	printResult(score, c);
	return 0;
}