#include <iostream>
#include <cmath>
using namespace std;

void cartesian2polar(const double x, const double y)
{
	cout << "Ergebnis r = " << sqrt(x*x + y*y) << endl;
	cout << "Ergebnis phi = " << atan2(y, x) * 180. / M_PI << "°" << endl;
	
	// Die Funktion atan2 erwartet als Argumente die beiden Werte der kartesischen Koordinaten x und y (Reihenfolge: y,x) und liefert dann arctan(y/x) in Radian (-Pi bis Pi) zurück.
}

int main()
{
	cout << "Bitte x-Koordinate eingeben: ";
	double x;
	cin >> x;
	
	cout << "Bitte y-Koordinate eingeben: ";
	double y;
	cin >> y;
	
	cartesian2polar(x, y);
}
