#include <iostream>
#include <cmath>
using namespace std;

void potenzreihe(const double x, double& y1, double& y2)
{
	// Koeffizienten der Entwicklung
	const double f1[6] = { 1, -1./6., 1./120., -1./5040., 1./362880., -1./39916800. };
	const double f2[6] = { 1, -1./2., 1./24., -1./720., 1./40320., -1./3628800.};
	const double *p1 = f1, *p2 = f2; 
	double power_x = 1; 
	
	y1 = 0; 
	y2 = 0; 

	for ( int i=0; i<12; i++ )
	{
		if ( i%2 )
		  y1 += power_x * *(p1++);
		else
		  y2 += power_x * *(p2++);

		power_x *= x;
	}
}

int main()
{
	double input;
	double y1,y2; 
	
	cout << "Bitte x Wert angeben: ";
	cin >> input;
	
	potenzreihe(input, y1, y2); 

	// berechne f1(x) und sin(x)
	cout << "f_1(" << input << ") = " << y1 << endl;
	cout << "sin(" << input << ") = " << sin(input) << endl;
	
	cout << endl;
	
	//berechne f2(x) und cos(x)
	cout << "f_2(" << input << ") = " << y2 << endl;
	cout << "cos(" << input << ") = " << cos(input) << endl;
	
	// Die Potenzreihenentwicklungen f1 und f2 entsprechen den Funktionen sin und cos (bis auf durch Endlichkeit von Datentyp und Ordnung der Entwicklung bedingte Abweichungen)
}
