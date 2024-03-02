/// VektorsmasivaNelementi.cpp
/*****************************************************
Uldis Straujums, us22011
N elementu dinamiska masīva realizācija ar vektoru.
Programma izveidota: 27.10.2020.
******************************************************/
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main ()
{

int N;
int sk;
vector<int> aa = {};
cout << "Ievadiet elementu skaitu: "<< endl;
cin >> N;
for (int i=0; i<N; i++)
{
    cout << "Ievadiet elementu: "<< endl;
    cin >> sk;
    aa.push_back(sk); /// beigās
}

for (auto &a: aa)
{ cout<<a<<" "; };
cout << endl;
for (int i=0; i<aa.size(); i++)
{ cout<<aa[i]<<" "; };
}
/************ Testu plāns **************************
   N skaitļi            paredzamais rezultāts
  3   12 -3 4           12 -3 4
****************************************************/
