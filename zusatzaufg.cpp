#include <iostream>
#include <cmath>
using namespace std;

void printInt(const int i)
{
	cout << i << endl;
}

int main()
{
	// For- und While-Schleifen
	const int start = 1;
	const int ender = 3;

	cout << "For-Schleife:" << endl;

	for ( int f = start; f <= ender; f++ )
	{
		printInt(f);
	}

	cout << endl << "While-Schleife:" << endl;

	int w = start; // Wie in der For-Schleife wird die Zähl-Variable zunächst auf den Startwert gesetzt...

	while ( w <= ender ) // ... und bei jedem Durchlauf überprüft ob das Ende erreicht ist.
	{
		printInt(w++); // Jeder Durchlauf erhöht ebenfalls die Zähl-Variable um 1.
	}

	// Do- und Switch-Schleifen

	cout << endl << "Do-Schleife:" << endl;

	int d = start;

	do
	{
		printInt(d++);
	}
	while ( d <= ender );

	cout << endl << "Switch:" << endl;

	int s = start;

	switch ( s )
	{
		case 1:
			printInt(s++);

		case 2:
			printInt(s++);

		case 3:
			printInt(s++);
			break; // Die break-Anweisung wird verwendet, um den switch-Block zu verlassen. Ohne diese Anweisung werden, wie hier im Beispiel, auch nachfolgende case-Blöcke ausgeführt.

		default:
			break;
	}
}
