/// matrica_dinamiska_masivs.cpp
/**Izveidot dinamisku veselu skaitļu matricu A(m,n).
Realizācijā lietot dinamisku masīvu.
**/
#include<iostream>
using namespace std;
int main()
{
int** A;
int m, n;

cout << "Ievadiet matricas rindu skaitu: " << endl;
cin >> m;
cout << "Ievadiet matricas kolonnu skaitu: " << endl;
cin >> n;
/// Izveido dinamisku matricu A(m,n)
A = new int*[m];
for (int i=0;i<m;++i)
    A[i] = new int[n];
/// Aizpilda matricu A(m,n)
for (int r=0;r<m;++r)
    for (int k=0;k<n;++k)
{
    cout << "Ievadiet matricas " << r+1<<".rindas, "
         << k+1 << ".kolonnas elementu: " << endl;
    cin >> A[r][k];
}
/// Izdrukā matricu A(m,n)
for (int r=0;r<m;++r)
{
    for (int k=0;k<n;++k) cout <<A[r][k]<<' ';
    cout <<endl;
}

for (int i=0;i<m;++i)
    delete[] A[i];
delete[] A;
}
/****************** Testu plāns *********************
m n       matrica         rezultāts
2 3       -3 4 6          -3 4 6
masīvs    12 5 7          12 5 7
*****************************************************/
