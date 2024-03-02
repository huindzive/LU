#include<iostream>
using namespace std;
int main(){
int sk;
int negsum = 0;
do
{
  cin >> sk;
  if (sk<0) negsum += sk;
} while(sk!=0);
if (negsum !=0) /// pārbauda, vai ir bijis kāds negatīvs skaitlis, un tāpēc ir
                /// izmainīta negsum sākotnējā vērtība 0
    cout << negsum << endl;
else {
    cout << "Nevar aprēķināt negatīvo skaitļu summu, jo "<< endl;
    cout << "nav neviena negatīva skaitļa" << endl;
     }
}
