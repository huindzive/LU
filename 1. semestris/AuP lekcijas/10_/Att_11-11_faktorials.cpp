/// Att. 11.11. Rekursīva funkcija faktoriāla izrēķināšanai
#include<iostream>
using namespace std;

int fact (int num)
{
if (num <= 1) return 1;
else return num * fact (num-1);
};
int main()
{
  cout << fact(0) << endl;
  cout << fact(1) << endl;
  cout << fact(2) << endl;
  cout << fact(3) << endl;
  cout << fact(5) << endl;



}
