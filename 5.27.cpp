#include <iostream>
using namespace std;
int main()
{
	int count; 
	bool trigger = false;
	for ( count = 1; count <= 10, !trigger; ++count )
	{
		if ( count == 4 )
			trigger = true; 
		
		cout << count << " ";
	}	
	cout << "\nBroke out of loop at count = " << count << endl;
} 

