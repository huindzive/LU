// For cikls, kas izpilda cikla ķermeni tieši n reizes
#include<iostream>
using namespace std;
int main()
{
int n;
int sk;
int sum;
cout << "Saskaita n veselus skaitļus" << endl;
cout << "Ievadiet skaitļu skaitu n: " << endl;
cin >> n;
sum = 0;
for (int i = 0; i < n; i++)
   {
    cout << "Ievadiet veselu skaitli: "<< endl;
    cin >>sk;
    sum+=sk;
   }
cout << "Summa: " << sum << endl;
}
