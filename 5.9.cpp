#include<iostream>
using namespace std;
int main(){


int i;
int product;

for(i = 1;i <=15;i+=2)
{
	cout<<"odd numbers"<<i<<endl;
	if(i%2!=0)

		product = product * i;
	else 
			continue;
	

}	cout<<"product of odd numbers: "<<product;


return 0;
}

