/// AuPLa0903.cpp
/******************************************************
Uldis Straujums, us22011
AuPLa0903. Izveidot C++ funkciju,
kas aprēķina virknes n-to locekli.
Virkne uzdota ar sakarību:
v0 = 2; v1 = 3;
vn = 4*vn-1 + 3*vn-2;
Izveidot C++ programmu, kas izsauc izveidoto funkciju.
Jābūt iespējai programmu izpildīt atkārtoti,
neizejot no programmas.
Programma izveidota: 26.10.2021.
******************************************************/
#include <iostream>
using namespace std;
/******************************************
int virkne(int n);
Funkcija virkne(n)
aprēķina virknes n-to locekli.
Virkne uzdota ar sakarību:
v0 = 2; v1 = 3;
vn = 4*vn_1 + 3*vn_2;
Atgriež kā rezultātu virknes n-to locekli.
******************************************/
int virkne(int n)
{
    int vk_2=2;
    int vk_1=3;
    int vk;
    if (n==0) return 2;
    if (n==1) return 3;
    for (int i=2;i<=n;i++)
    {
        vk   = 4*vk_1 + 3*vk_2;
        vk_2 = vk_1;
        vk_1 = vk;
    }
    return vk;
}
int main()
{
   int ok; /// Lietotāja atbilde: 1 - turpināt, 0 - beigt

do
{
   int n;
   cout << "Aprēķina virknes n-to locekli" << endl;
   do
   {
    cout <<"Ievadiet virknes locekļa numuru n, n>=0:" << endl;
    cin >> n;
    if (n<0) cout << "Kļūdaina vērtība. Jāievada n>=0."<< endl;
   }while(n<0);

   cout << "Virknes "<< n<< ". loceklis ir " << virkne(n)<< endl;

   cout << endl;
   cout << " Vai turpināt (1) vai beigt (0)?" << endl;
   cin >> ok;
}while(ok==1);

    return 0;
}
/*************Testu plāns****************
  n       paredzamais rezultāts
  0       2
  1       3
  2       18
  3       81
  -1      jāievada n>=0
*****************************************/
