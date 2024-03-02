/// Din_mas.cpp
/*****************************************************
Uldis Straujums, us22011
Dinamisks masīvs. Ievadīt masīva mas elementu skaitu N.
 Pieprasīt dinamiski vietu N veseliem skaitļiem.
 Ievadīt N veselus skaitļus masīvā mas.
 Izdrukāt N skaitļus.
Programma izveidota: 27.10.2020.
Mainīta: 24.10.2023. Pielikta ieejas datu kontrole
******************************************************/
#include<iostream>
using namespace std;
int main()
{
  int N;
  int* mas;
  int sk;

  do
  {
  cout << "Ievadiet skaitļu skaitu N, N>=1: "<< endl;
  cin >> N;
  if(N<1)
    cout <<"Kļūdaina vērtība. Jāievada N, N>=1"<< endl;
  }while(N<1);

  mas = new int[N];
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

  delete[] mas;
}
/************** Testu plāns ******************
N    skaitļi      paredzamais rezultāts
3    14 -3 7       14 -3 7
*********************************************/
