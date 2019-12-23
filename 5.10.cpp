#include<iostream>
using namespace std;
int main(){
	int num;
	int fac =1;
	cout<<"Enter number for factorial: ";
	cin>>num;
	
	for(int i=1;i<=num;++i){
		fac *= i;
		cout<<fac<<endl;
	}	
	return 0;	
}

