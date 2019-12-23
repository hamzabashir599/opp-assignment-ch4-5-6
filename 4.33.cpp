#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter Three Numbers :";
cin>>a>>b>>c;
if((a*a+b*b == c*c) || (b*b+c*c == a*a) || (a*a+c*c == b*b))
cout<<"They are the sides of a right triangle."<<endl;
else
cout<<"They are not the sides of a right triangle."<<endl;
return 0;
}

