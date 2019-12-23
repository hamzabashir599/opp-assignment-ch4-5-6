#include<iostream>
using namespace std;
int main(){
	int sum;
	int counter=0;
	cout<<"Enter integers for average (Enter 9999 to end)"<<endl;
	cin>>sum;	
	for(int i=0;i!=9999;counter++){
		sum+=i;
		cin>>i;
	}
	cout<<"average is: "<<sum/counter;	
	return 0;
}

