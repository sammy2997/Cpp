// Samuel Adama
// Find the Lowest of the 5 scores passed by the Judges.
// findLowest


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	void findLowest(double JudgeA, double JudgeB, double  JudgeC, double JudgeD, double JudgeE);
	double JudgeA = 3;
	double JudgeB = 9;
	double  JudgeC = 6;
	double JudgeD = 10;
	double JudgeE = 2;
	

	if(JudgeA <= JudgeB && JudgeA <= JudgeC && JudgeA <= JudgeD && JudgeA <= JudgeE)
	{
		cout << "Judge A gave the lowest score of " << JudgeA << endl;
	}
	if(JudgeB < JudgeA && JudgeB <= JudgeC && JudgeB <= JudgeD && JudgeB <= JudgeE)
	{
		cout << "Judge B gave the lowest score of " << JudgeB << endl;
	}
	if(JudgeC < JudgeA && JudgeC < JudgeB && JudgeC <= JudgeD && JudgeC <= JudgeE)
	{
		cout << "Judge C gave the lowest score of " << JudgeC << endl;
	}
	if(JudgeD < JudgeA && JudgeD < JudgeB && JudgeD < JudgeC && JudgeD <= JudgeE)
	{
		cout << "Judge D gave the lowest score of " << JudgeD << endl;
	}
	if(JudgeE < JudgeA && JudgeE < JudgeB && JudgeE < JudgeC && JudgeE < JudgeD)
	{
		cout << "Judge E gave the lowest score of " << JudgeE << endl;
	}
	

	return 0;
}


