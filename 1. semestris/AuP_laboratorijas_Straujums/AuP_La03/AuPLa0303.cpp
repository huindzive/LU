/// AuPLa0303.cpp
/*********************************************************************
Uldis Straujums, us22011
AuPLa0303. Izveidot C++ programmu,
kura ļauj ievadīt trīs naturālus skaitļus un noskaidro,
vai starp skaitļiem ir kāds “laimīgais skaitlis”.
“Laimīgais skaitlis” ir tāds skaitlis, kura pēdējie divi cipari ir 21.
Noskaidrošanu veikt tikai ar skaitliskām darbībām.
Programma izveidota: 15.09.2020
Mainīts: 22.09.2022 Pievienota ieejas datu korektības nodrošināšana
Mainīts: 23.09.2023 Uzlabota lietotāja saskarne, papildināts testu plāns
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
cout << "Noskaidro,vai starp trīs naturāliem skaitļiem ir kāds \"laimīgais skaitlis\""  << endl;
int ok;
do
{
int sk1, sk2, sk3;
/// Nodrošina ieejas datu korektumu
///  sk1, sk2 un sk3 ir naturāli skaitļi: katrs skaitlis>=1
do
{
cout << "Ievadiet trīs naturālus skaitļus" << endl;
cin >> sk1 >> sk2 >> sk3;
if(sk1<1 or sk2<1 or sk3<1)
    cout << "Kļūdaina vērtība, jāievada visi skaitļi>=1"<<endl;
}while(sk1<1 or sk2<1 or sk3<1);

/// Izmanto korektus sk1, sk2 un sk3: naturāli skaitļi (katrs skaitlis>=1)
if ((sk1 % 100 == 21) || (sk2 % 100 == 21) || (sk3 % 100 == 21))
   cout << "Ir kāds \"laimīgais skaitlis\"" << endl;
else
   cout << "Nav neviena \"laimīgā skaitļa\"" << endl;

cout << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
} while (ok == 1);

}
/************* Testu plāns ******************************
 skaitļi         paredzamais rezultāts
 21  1 13621    ir kāds laimīgais skaitlis
 12 21 12345    ir kāds laimīgais skaitlis
 23  7   143    nav neviena laimīgā skaitļa
 23  0     5    nekorekta vērtība
*************************************************************/
