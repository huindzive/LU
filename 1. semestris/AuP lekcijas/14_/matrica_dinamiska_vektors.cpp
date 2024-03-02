/// matrica_dinamiska_vektors.cpp
/**Izveidot dinamisku veselu skaitļu matricu V(m,n).
Realizācijā lietot vektoru.
**/
#include<iostream>
#include <vector>
using namespace std;
int main()
{
int m, n;

cout << "Ievadiet matricas rindu skaitu: " << endl;
cin >> m;
cout << "Ievadiet matricas kolonnu skaitu: " << endl;
cin >> n;
/// Izveido vektoru V(m,n)
vector<vector<int>> V;
int elem;
for (int r=0;r<m;++r)
{
    vector <int> rinda;
    for (int k=0;k<n;++k)
    {
    cout << "Ievadiet vektora " << r+1<<".rindas, "
         << k+1 << ".kolonnas elementu: " << endl;
    cin >> elem; rinda.push_back(elem);
    }
    V.push_back(rinda);
}
/// Izdrukā matricu V(m,n)
for (int r=0;r<m;++r)
{
    for (int k=0;k<n;++k) cout <<V[r][k]<<' ';
    cout <<endl;
}
}
/****************** Testu plāns *********************
m n       matrica         rezultāts
2 3        -3 4 6          -3 4 6
vektors    12 5 7          12 5 7
*****************************************************/
