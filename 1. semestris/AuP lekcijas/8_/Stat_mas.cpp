/// Stat_mas.cpp
/*****************************************************
Uldis Straujums, us22011
Statisks masīvs. Ievadīt masīva mas elementu skaitu N.
 Ievadīt N veselus skaitļus masīvā mas.
 Izdrukāt N skaitļus.
Programma izveidota: 27.10.2020.
******************************************************/
#include<iostream>
using namespace std;
int main()
{
  int N;
  int mas[50];
  int sk;

  do
  {
  cout << "Ievadiet skaitļu skaitu N, 1<=N<=50: "<< endl;
  cin >> N;
  if (N<1 || N>50) cout << "Kļūdaina vērtība. Jāievada skaitļu skaits N, 1<=N<=50 " << endl;
  }while(N<1 || N>50);

  for(int i=0;i<N;i++)
  {
      cout << "Ievadiet veselu skaitli:"<< endl;
      cin>> mas[i];
  }
  for(int i=0;i<N;i++)
  {
      cout << mas[i] << ' ';
  }
  cout << endl;


}
/************** Testu plāns ******************
N    skaitļi      paredzamais rezultāts
3    14 -3 7       14 -3 7
0                   kļūda, ievadiet 1<=N<=50
51                  kļūda, ievadiet 1<=N<=50
*********************************************/
