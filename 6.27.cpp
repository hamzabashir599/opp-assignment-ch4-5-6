#include <iostream>
using namespace std;
 
double smallest(double, double, double);
 
int main()
{
   double i, j, k;
 
   cout << "Enter three floating point numbers: ";
   cin >> i >> j >> k;
 
   cout << "The smallest is " << smallest(i, j, k);
 
   return 0;
}
 
double smallest(double i, double j, double k)
{
   double small;
 
   small = i;
   if( i > j)
   {
      if( j > k)
         small = k;
      else
         small = j;
   }
   else
   {
      if( i > k)
         small = k;
   }
 
   return small;
}

