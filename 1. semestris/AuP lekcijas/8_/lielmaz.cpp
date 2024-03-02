/// lielmaz.cpp
/*****************************************************
Uldis Straujums, us22011
lielmaz. N elementu masīva apstrāde.
Lielākā un mazākā elementa atrašana.
Programma izveidota: 27.10.2020.
Mainīta: 24.10.2023. Pielikta ieejas datu kontrole
******************************************************/
#include <iostream>
using namespace std;
/***
void lielmaz(int* mas, int N, int &liel, int &maz;
Funkcija lielmaz(mas, N, liel, maz)
atrod N veselu skaitļu masīvā mas lielāko skaitli un
mazāko skaitli.
Atgriež kā rezultātu atrastos skaitļus parametros liel un maz.
*/
void lielmaz(int* mas, int N, int &liel, int &maz)
{
   liel = maz = mas[0];
   for (int i=0; i<N; i++)
   {
   if (mas[i]>liel) liel=mas[i];
   if (mas[i]<maz) maz = mas[i];
   }
   return;
}
int main ()
{

int N;
int sk;
int liels;
int mazs;
int* mas;
int mas2[4];

do
{
cout << "Ievadiet elementu skaitu N, N>=1: "<< endl;
cin >> N;
if(N<1)
    cout <<"Kļūdaina vērtība. Jāievada N, N>=1"<<endl;
}while(N<1);
mas = new int[N];
for (int i=0; i<N; i++)
{
    cout << "Ievadiet elementu dinamiskā masīvā: "<< endl;
    cin >> sk;
    mas[i]=sk;
}
for (int i=0; i<N; i++) cout <<mas[i] << ' ';
cout << endl;
lielmaz(mas, N, liels, mazs);
 cout<<liels<<' ' << mazs << endl;
 cout << endl;
delete []mas;
for (int i=0; i<4; i++)
{
    cout << "Ievadiet elementu statiskā masīvā: "<< endl;
    cin >> sk;
    mas2[i]=sk;
}
for (int i=0; i<4; i++) cout <<mas2[i] << ' ';
cout << endl;
lielmaz(mas2, 4, liels, mazs);
 cout<<liels<<' ' << mazs << endl;
 cout << endl;


}
/************ Testu plāns **************************
   N skaitļi            paredzamais rezultāts
  3   12 -3 4           12 -3 4
                        12 -3
      1 2 3 4           1 2 3 4
                        4 1
****************************************************/
