#include <iostream>
using namespace std;
int main(){
int c = 1;
float ver = 1;
int even_odd=1;
while(c<20){

if(even_odd%2==0){
cout<<" + "<<"4/"<<ver;
}
else{
cout<<" - "<<"4/"<<ver;
}
ver=ver +2;
c++;
even_odd++;
}
return 0;
}

