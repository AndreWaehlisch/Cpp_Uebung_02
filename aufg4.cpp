#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	const int start = 10000000;
	const int end = 10000500;
	bool isPrime;
	
	cout << "Primzahlen zwischen " << start << " und " << end << ":" << endl;
	
	for ( int u=start; u<end; ++u )
	{
		isPrime = true;
		
		for ( int i=2; i <= floor( double(u) / 2. ); ++i )
		{
			if ( !(u % i) )
			{
				isPrime = false;
				break;
			}
		}
		
		if ( isPrime )
			cout << u << " ist prim." << endl;
	}
}
