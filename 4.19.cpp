#include <iostream>
using namespace std;
int main(){
int c=1;
int l,l2;
int n;
while( c <=10){
cout<<"Enter NUmber :";
cin>>n;
if((n>l) && (n>l2)){ 
l2=l;
l=n; 
}
else if((n>l) && (n<l2)){
l2=n;
}
c++;
}
cout<<"First Largest Number is :"<<l<<endl;
cout<<"Second Largest Number is :"<<l2<<endl;
return 0;
}

