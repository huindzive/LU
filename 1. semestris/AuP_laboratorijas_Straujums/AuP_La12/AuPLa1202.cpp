/// AuPLa1202.cpp
/******************************************************************************
Uldis Straujums, us22011
AuPLa1202. Sastādīt C++ funkciju rinddazad(matr, n, m, r),
kas aprēķina, cik veselu skaitļu matricas matr r-tajā rindā ir dažādu skaitļu.
Matrica matr sastāv no m rindām un n kolonnām.
Sastādīt arī izsaucošo programmu, kurā tiek aprēķināts,
cik ir dažādu skaitļu katrā matricas rindā.
Aprēķinu veikt gan tieši izveidotai matricai, gan dinamiski izveidotai matricai.
Programma izveidota: 24.11.2020.
Mainīta: 1.12.2022.  Vienkāršoti funkcijas dazad komentāri.
******************************************************************************/
#include<iostream>
using namespace std;
/******************************************************
int rinddazad(int **matr, int m, int n, int r);
Funkcija rinddazad(matr, m, n, r)
 atgriež kā rezultātu dažādo skaitļu skaitu
 dinamiskas veselu skaitļu matricas matr r-tajā rindā.
Matrica matr sastāv no m rindām un n kolonnām.
******************************************************/
int rinddazad(int **matr, int m, int n, int r);
/******************************************************
int rinddazad(int matr[][3], int m, int n, int r);
Funkcija rinddazad(matr, m, n, r)
 atgriež kā rezultātu dažādo skaitļu skaitu
 tieši veidotas veselu skaitļu matricas matr r-tajā rindā.
Matrica matr sastāv no m rindām un 3 kolonnām.
*******************************************************/
int rinddazad(int matr[][3], int m, int n, int r);
/**********************************************************
int dazad(int *mas, int n);
Funkcija dazad(mas, n)
 atgriež kā rezultātu dažādo skaitļu skaitu
 veselu skaitļu masīvā mas no n elementiem.
**********************************************************/
int dazad(int *mas, int n);

int main()
{
int** matrd;
int matr[2][3] = {7, 5, 6, 5, 5, 5};;
int m, n;

cout << "Ievadiet matricas rindu skaitu: " << endl;
cin >> m;
cout << "Ievadiet matricas kolonnu skaitu: " << endl;
cin >> n;
               /// Apstrādā dinamisku matricu matrd
matrd = new int*[m];
for (int i=0;i<m;++i)
    matrd[i] = new int[n];
for (int r=0;r<m;++r)
    for (int k=0;k<n;++k)
{
    cout << "Ievadiet dinamiskas matricas " << r+1<<".rindas, "
         << k+1 << ".kolonnas elementu: " << endl;
    cin >> matrd[r][k];
}


for (int r=0;r<m;r++)
{
cout << "Dinamiskas matricas " <<r+1 << ". rindā ir "
     << rinddazad(matrd, m, n, r) << " dažādi skaitļi" <<endl;
}

for (int i=0;i<m;++i)
    delete[] matrd[i];
delete[] matrd;
              /// Apstrādā tieši veidotu matricu matr ar 3 kolonnām
for (int r=0;r<2;r++)
{
cout << "Tieši veidotas matricas " <<r+1 << ". rindā ir "
     << rinddazad(matr, 2, 3, r) << " dažādi skaitļi" <<endl;
}
}
/******************************************************
int rinddazad(int **matr, int m, int n, int r);
Funkcija rinddazad(matr, m, n, r)
 atgriež kā rezultātu dažādo skaitļu skaitu
 dinamiskas veselu skaitļu matricas matr r-tajā rindā.
Matrica matr sastāv no m rindām un n kolonnām.
******************************************************/
int rinddazad(int **matr, int m, int n, int r)
{

return dazad(matr[r], n);
}
/**********************************************************
int rinddazad(int matr[][3], int m, int n, int r);
Funkcija rinddazad(matr, m, n, r)
 atgriež kā rezultātu dažādo skaitļu skaitu
 tieši veidotas veselu skaitļu matricas matr r-tajā rindā.
Matrica matr sastāv no m rindām un 3 kolonnām.
**********************************************************/
int rinddazad(int matr[][3], int m, int n, int r)
{
 return dazad(matr[r], 3);
}
/**********************************************************
int dazad(int *mas, int n);
Funkcija dazad(mas, n)
 atgriež kā rezultātu dažādo skaitļu skaitu
 veselu skaitļu masīvā mas no n elementiem.
**********************************************************/
int dazad(int *mas, int n)
{
 int* dazadi;
 dazadi = new int[n];
                    /// uzskaitīsim masīvā dazadi dažādos skaitļus
                    /// (var būt 1 skaitlis, var būt n skaitļi)
 int skaits;
/// Mainīgā dubultās lomas metode -
/// mainīgajam skaits ir divas lomas:
///  1) pašlaik atrasto dažādo skaitļu skaits masīvā mas,
///  2) brīvās vietas indekss masīvā dazadi.

dazadi[0] = mas[0];
skaits=1; /// skaits ir ievietoto dažādo skaitļu skaits masīvā dazadi
          /// skaits ir arī pirmās brīvās(neaizņemtās) vietas indekss masīvā dazadi

 for (int k=1;k<n;k++)
 {
     bool ir = false; /// kārtējais simbols mas[k] vēl nav sastapts masīvā dazadi
     for (int i=0;i<skaits;i++)
     {
         if (mas[k]==dazadi[i]) {ir = true; break;}
     }
     if(!ir)
     {dazadi[skaits]=mas[k]; skaits++;}
 }
 delete [] dazadi;

 return skaits;
}
/****************** Testu plāns *************
m n    matrd dinamiska           rezultāts
2 3    -3 4 -3                      2
        5 5 5                       1
m n    matr tieši veidota        rezultāts
2 3     7 5 6                      3
        5 5 5                      1
*******************************************/
