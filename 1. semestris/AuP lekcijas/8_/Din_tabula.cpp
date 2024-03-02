/// Din_tabula.cpp
/****************************************************************
Uldis Straujums, us22011
Dinamiska tabula. Ievadīt tabulas tab rindu skaitu r un
 kolonnu skaitu k.
 Ievadīt tabulas elementu vērtības.
 Aprēķināt katras rindas elementu summu un saglabāt masīvā summas.
 Izdrukāt aprēķinātās summas.
Programma izveidota: 25.10.2021.
******************************************************************/
#include<iostream>
using namespace std;
int main()
{
  int r, k;
  int **tab;
  int *summas;
  int sk;

  do
  {
  cout << "Ievadiet rindu skaitu r, r>=1: "<< endl;
  cin >> r;
  if (r<1) cout << "Kļūdaina vērtība. Ievadiet rindu skaitu r, r>=1 " << endl;
  }while(r<1);
  do
  {
  cout << "Ievadiet kolonnu skaitu k, k>=1: "<< endl;
  cin >> k;
  if (k<1) cout << "Kļūdaina vērtība. Ievadiet kolonnu skaitu k, k>=1 " << endl;
  }while(k<1);

  /// pieprasa dinamiski atmiņu tabulai tab un rindu summām summas
  tab = new int*[r];
  for (int i=0;i<r;i++) tab[i] = new int[k];
  summas = new int[r];
  for (int i=0;i<r;i++)summas[i] = 0;


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
  /// atbrīvo dinamiski pieprasīto atmiņu
  for (int i=0;i<r;i++) delete[] tab[i];
  delete[] tab;
  delete[] summas;
}
/************** Testu plāns ******************
r  k     skaitļi      paredzamais rezultāts
2  3     14 -3 7      18
         1   2 3       6
0  0                 kļūda
*********************************************/
