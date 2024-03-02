#include<iostream>
using namespace std;

int main()
{
int a;
cout << "Ievadiet veselu skaitli: " << endl;
cin >> a;
if (a%2 == 0)
{
if (a > 0) cout << "Pozitīvs pāra skaitlis" << endl;
else cout << "Nepozitīvs pāra skaitlis" << endl;
}
else if (a > 0) cout << "Pozitīvs nepāra skaitlis" << endl;
else cout << "Nepozitīvs nepāra skaitlis" << endl;
}
/********* Testu plāns ***************
   a    paredzamais rezultāts
   8     Pozitīvs pāra skaitlis
  -8     Nepozitīvs pāra skaitlis
   7     Pozitīvs nepāra skaitlis
  -7     Nepozitīvs nepāra skaitlis
   0     Nepozitīvs nepāra skaitlis
***************************************/
