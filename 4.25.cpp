#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter size of square";
	cin>>size;
	//	first line
	cout<<endl<<"*";
	for(int i=1;i<=size-1;i++){
	cout<<"*";
	}
cout<<endl;
// left and right
	for(int i=3;i<=size;i++){
		cout<<"*"<<"*"<<endl;		
}
//	last line
	for(int i=1;i<=size;i++){
	cout<<"*";
	}
cout<<endl;
	cout<<endl;
return 0;	
}

