#include<iostream>
using namespace std;
int main(){
	double miles;
	double gallon;
	int milestotal=0;
	int gallontotal=0;
	
	cout<<"Enter miles driven (-1 to quit): ";
	cin>>miles;
	
while(miles!=-1){
	cout<<"Enter gallons used: ";
	cin>>gallon;
	
	milestotal+=miles;
	gallontotal+=gallon;
	
	cout<<"MPG this trip: "<<miles/gallon<<endl;
	cout<<"Total MPG: "<<static_cast<double>(milestotal)/(gallontotal)<<endl;
			cout<<"Enter miles driven (-1 to quit): ";
	cin>>miles;
}
		return 0;
}

