#include <vector>
#include <iostream>
using namespace std;
int main ()
{
vector<int> aa; /// tukšs vektors
for (auto &a: aa) { cout<<a<<" "; }; cout<<"//"<<endl;
vector<int> bb (5,99); /// fiksētas vērtības pavairošana
for (auto &a: bb) { cout<<a<<" "; }; cout<<"//"<<endl;
vector<int> cc = {11,22,33}; /// inicializācijas virkne
for (auto &a: cc) { cout<<a<<" "; }; cout<<"//"<<endl;
vector<int> dd = cc; /// pilna kopija
for (auto &a: dd) { cout<<a<<" "; }; cout<<"//"<<endl;
auto prelast = cc.end();
--prelast;
vector<int> ee (cc.begin(), prelast); /// daļēja kopija
for (auto &a: ee) { cout<<a<<" "; }; cout<<"//"<<endl;
}
/************ Testu plāns **************************
           paredzamais rezultāts
//
99 99 99 99 99 //
11 22 33 //
11 22 33 //
11 22 //
****************************************************/
