#include<iostream>
using namespace std;
 
int main()
{
  int number, quantity = 0;
  int quantity1 = 0, quantity2 = 0, quantity3 = 0, quantity4 = 0, quantity5 = 0;
  double amount1 = .0, amount2 = .0, amount3 = .0, amount4 = .0, amount5 = .0;
 
  for( ;number != -1;)
  {
 
  cout << "Enter product number and quantity sold (enter -1 to end):"<<endl;
  cout<<"enter number";
  cin >> number;  
  cout<<"enter quantity";
   cin >> quantity;
 
    switch( number )
     {
       case 1:
         quantity1 += quantity;
         amount1 += quantity * 2.98;
         break;
      case 2:
        quantity2 += quantity;
        amount2 += quantity * 4.50;
        break;
      case 3:
        quantity3 += quantity;
        amount3 += quantity * 9.98;     
        break;
      case 4:
        quantity4 += quantity;
        amount4 += quantity * 4.49;
        break;
      case 5:
        quantity5 += quantity;
          amount1 += quantity * 6.87;         
        break;
      default:
          cout << "Enter correct product number!" << endl;
          break;
    }
   }

cout << "Sold product number: " << quantity1 + quantity2 + quantity3 + quantity4 + quantity5 << endl;
   cout << "Sold product value: " << amount1 + amount2 + amount3 + amount4 + amount5 << endl;
 
   //for pause
   system("PAUSE");
   return 0;
}

