#include <iostream>
#include <cmath>
using namespace std;

void polar2cartesian(const double r, const double phi)
{
	// Intervall korrigieren.
	double phi_corrected = phi;

	const double aux1 = 360; 
	const double aux2 = 180;
	
	if ( fabs(phi) > aux1 )
		phi_corrected = fmod(phi_corrected, aux1);
	
	// Phi zu Radian konvertieren
	phi_corrected *= (M_PI / aux2);
	
	// Eigentlich Berechnung und Ausgabe
	cout << "Ergebnis x = " << r * cos(phi_corrected) << endl;
	cout << "Ergebnis y = " << r * sin(phi_corrected) << endl;
	
	// Wegen der endlichen Speichergröße des Dateityps double kann eine sehr kleine Zahl (z.B. e-16) zurückgegeben werden wenn als Ergebnis eigentlich 0 erwartet wird.
}

int main()
{
	cout << "Bitte den Radius r eingeben: ";
	double r;
	cin >> r;
	
	cout << "Bitte den Winkel phi eingeben (in Grad): ";
	double phi;
	cin >> phi;
	
	polar2cartesian(r, phi);
}
