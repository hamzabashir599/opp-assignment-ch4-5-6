#include <iostream>
using namespace std;
int main(){
  int i, smallest;
  cout << "Enter integers you want to enter :";
  cin >> i;
  cin >> smallest;
  for(int b; i > 1; i-- ){
  cin >> b;
    if( b < smallest )
      smallest = b;
   }
  cout << "Smallest integer is " << smallest << endl;
   return 0;
}

