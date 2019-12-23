#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number to print *: ";
	cin>>num;	
	if(num<=30)	
	for(int i=1;i<=num;i++){
		cout<<"*";
	}
	else
	cout<<"please number between 1 and 30";
	return 0;
	}

