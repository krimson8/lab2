#include "calc.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

calculate::calculate()
{
	ofstream outFile("file.out" , ios::out);
	ifstream inFile("file.in" , ios::in);
	float h , w;
	while(inFile >> h >> w) if(h != 0 && w != 0) result( w / ( h * h * 0.0001f));
}

void calculate::result(float bmi)
{
	ofstream outFile("file.out" , ios::app);

	if( bmi < 15.0 )outFile << fixed << setprecision(2) << bmi << "\tVery severely underweight" << endl;
	else if( bmi < 16.0 )outFile << fixed << setprecision(2) << bmi << "\tSeverely underweight" << endl;
	else if( bmi < 18.5 )outFile << fixed << setprecision(2) << bmi << "\tUnderweight" << endl;
	else if( bmi < 25.0 )outFile << fixed << setprecision(2) << bmi << "\tNormal" << endl;
	else if( bmi < 30.0 )outFile << fixed << setprecision(2) << bmi << "\tOverweight" << endl;
	else if( bmi < 35.0 )outFile << fixed << setprecision(2) << bmi << "\tObese Class I (Moderately obese)" << endl;
	else if( bmi < 40.0 )outFile << fixed << setprecision(2) << bmi << "\tObese Class II (Severely obese)" << endl;
	else outFile << fixed << setprecision(2) << bmi << "\tObese Class III (Very severely obese)" << endl;
	outFile.close();
}
