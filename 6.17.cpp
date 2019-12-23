#include <iostream>
#include<ctime>
using namespace std;
using std::rand;
int main()
{
srand(time( 0 ));
cout << "a) 2, 4, 6, 8, 10 : "<<endl <<"Your random is:"<<(rand() % 5 + 1) * 2 << endl;
cout << "b) 3, 5, 7, 9, 11 : "<<endl <<"Your random is:" << (rand() % 5 + 1) * 2 + 1 << endl;
cout << "c) 6, 10, 14, 18, 22 : " <<endl <<"Your random is;"<< ((rand() % 5 + 1) * 2 + 1) * 2 << endl;
return 0

