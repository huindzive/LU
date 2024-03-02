/*************************************************
 Statiska tabula. Ievadīt tabulas tab rindu skaitu r un
 kolonnu skaitu k.
 Ievadīt tabulas elementu vērtības.
 Aprēķināt katras rindas elementu summu un saglabāt masīvā summas.
 Izdrukāt aprēķinātās summas.
*************************************************/
/// Autors: Uldis Straujums
/// Veidota: 25.10.2021.
/// Stat_tabula.cpp
/*****************************************************
Uldis Straujums, us22011
Statiska tabula. Ievadīt tabulas tab
 rindu skaitu r un kolonnu skaitu k.
 Ievadīt tabulas elementu vērtības.
 Aprēķināt katras rindas elementu summu un saglabāt masīvā summas.
 Izdrukāt aprēķinātās summas.
Programma izveidota: 27.10.2020.
******************************************************/
#include<iostream>
using namespace std;
int main()
{
  int r, k;
  int tab[10][15];
  int summas[10]={0};
  int sk;

  do
  {
  cout << "Ievadiet rindu skaitu r, 1<=r<=10: "<< endl;
  cin >> r;
  if (r<1 || r>10) cout << "Kļūdaina vērtība. Ievadiet rindu skaitu r, 1<=r<=10 " << endl;
  }while(r<1 || r>10);
  do
  {
  cout << "Ievadiet kolonnu skaitu k, 1<=k<=15: "<< endl;
  cin >> k;
  if (k<1 || k>15) cout << "Kļūdaina vērtība. Ievadiet kolonnu skaitu k, 1<=k<=15 " << endl;
  }while(k<1 || k>15);

  for(int i=0;i<r;i++)
  {
      for (int j=0;j<k;j++)
      {
      cout << "Ievadiet tabulas "<<i+1<<".rindas "<<j+1<<".kolonnas elementu: "<< endl;
      cin>> tab[i][j];
      summas[i]+= tab[i][j];
      }
  }
  cout << "Katras rindas elementu summa: "<< endl;
  for(int i=0;i<r;i++)
  {
      cout << summas[i] << endl;
  }
  cout << endl;


}
/************** Testu plāns ******************
r  k     skaitļi      paredzamais rezultāts
2  3     14 -3 7      18
         1   2 3       6
0  15                 kļūda
*********************************************/
