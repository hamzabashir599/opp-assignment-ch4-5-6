#include<iostream>
using namespace std;
bool even(int number);

bool even(int number)
{
	if(number%2 == 0)
		{return true;}
	else
		{return false;}
}
int main()
{
int number;
while(true)
{		
cout<<"Enter a number" << std::endl;
cin >> number;
if(even(number))
{cout << number << " Is Even " << endl;}	
else
{cout << number << " Is Odd " <<endl;}
}
}

