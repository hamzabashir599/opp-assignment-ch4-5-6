#include<iostream>
using namespace std;
int main(){
	int num;
	int number;
	int total;
	cout<<"How many values you want to add?: ";
	cin>>num;
	for(int i=1;i<=num;i++){
		cout<<"Enter number: ";
		cin>>number;
		total+=number;	
	}
	cout<<"Total is: "<<total;
	return 0;
}

