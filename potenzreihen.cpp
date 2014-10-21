#include <iostream>
#include <cmath>
using namespace std;

double potenzreihe(const int coeff[], const double x)
{
	double result = 0;
	
	for ( int i=0; i<12; ++i )
	{
		if ( coeff[i] )
			result += ( 1./double(coeff[i]) * pow(x, i) );
	}
	
	return result;
}

int main()
{
	// Koeffizienten der Entwicklung
	const int f1[12] = { 0, 1, 0, -6, 0, 120, 0, -5040, 0, 362880, 0, -39916800 };
	const int f2[12] = { 1, 0, -2, 0, 24, 0, -720, 0, 40320, 0, -3628800, 0 };
	
	double input;
	
	cout << "Bitte x Wert angeben: ";
	cin >> input;
	
	// berechne f1(x) und sin(x)
	cout << "f_1(" << input << ") = " << potenzreihe(f1, input) << endl;
	cout << "sin(" << input << ") = " << sin(input) << endl;
	
	cout << endl;
	
	//berechne f2(x) und cos(x)
	cout << "f_2(" << input << ") = " << potenzreihe(f2, input) << endl;
	cout << "cos(" << input << ") = " << cos(input) << endl;
	
	// Die Potenzreihenentwicklungen f1 und f2 entsprechen den Funktionen sin und cos (bis auf durch Endlichkeit von Datentyp und Ordnung der Entwicklung bedingte Abweichungen)
}
