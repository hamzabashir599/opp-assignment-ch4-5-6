#include <iostream>
using namespace std;
 
void square ( int );
int side;
 
int main()
{
   cout << "Enter side: ";
   cin >> side;
   square( side );
   return 0;
}
void square( int side )
{
   for( int i = 1; i <= side; i++ )
   {
      for( int j = 1; j <= side; j++)
      {
         cout << "#";
      }
      cout << endl;
   }
}

