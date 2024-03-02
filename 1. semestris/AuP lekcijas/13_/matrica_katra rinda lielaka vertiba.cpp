/// matrica_katra rinda lielaka vertiba.cpp
/**Dota skaitļu matrica A(m,n).
Noskaidrot katrā rindā vislielāko skaitli.
Risinājumā izmantot savu izveidotu funkciju.
**/
#include<iostream>
#include <vector>
using namespace std;
/************************************************************************************
int liel_elem_rinda(int**A, int m, int n, int r);
Funkcija liel_elem_rinda(A, m, n, r) -
atgriež kā rezultātu lielākā r-tās rindas elementa indeksu veselu skaitļu matricā A
ar m rindām un n kolonnām.
Matrica A realizēta kā dinamisks divdimensiju masīvs,
*************************************************************************************/
int liel_elem_rinda(int**A, int m, int n, int r)
{
 int liel=A[r][0];
 int k_liel=0;
 for (int k=1;k<n;++k)
        if (A[r][k]> liel){k_liel=k; liel=A[r][k];}

return k_liel;
}
int main()
{
int** A;
int m, n;
int liel_r;
int liel_k;
int k;

cout << "Ievadiet matricas rindu skaitu: " << endl;
cin >> m;
cout << "Ievadiet matricas kolonnu skaitu: " << endl;
cin >> n;
A = new int*[m];
for (int i=0;i<m;++i)
    A[i] = new int[n];
for (int r=0;r<m;++r)
    for (int k=0;k<n;++k)
{
    cout << "Ievadiet matricas " << r+1<<".rindas, "
         << k+1 << ".kolonnas elementu: " << endl;
    cin >> A[r][k];
}

for (int r=0;r<m;r++)
{
cout << "Lielākais skaitlis " << A[r][liel_elem_rinda(A, m, n, r)]  << " matricas "
     <<r+1 << ". rindā" << endl;
}

for (int i=0;i<m;++i)
    delete[] A[i];
delete[] A;


}
/****************** Testu plāns *********************
m n       matrica         rezultāts
2 3       -3 4 6          6  1.rindā
masīvs    12 5 7          12 2.rindā
*****************************************************/
