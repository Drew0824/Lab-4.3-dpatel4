#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double firstGrade;
double secondGrade;
double thirdGrade;
double gradeAvg;

cout << setprecision (2) << fixed;


cout << "Please input the first grade \n" << endl;
  cin  >> firstGrade;

cout << "Please input the second grade \n" << endl;
  cin  >> secondGrade;

cout << "Please input the third grade \n" << endl;
  cin  >> thirdGrade;


gradeAvg = (firstGrade + secondGrade + thirdGrade) / 3;	
  cout << "The average of three grades is " << gradeAvg << endl;


}