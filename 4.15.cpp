#include<iostream>
using namespace std;
int main(){
	int sales;
			cout<<"Enter sales in dollars (-1 to end): ";
	cin>>sales;
	
while(sales!=-1){

	cout<<"Sallery is: "<<sales/100*9+200<<endl;
	
			cout<<"Enter sales in dollars (-1 to end): "<<endl;
	cin>>sales;
}
		
	return 0;
}

