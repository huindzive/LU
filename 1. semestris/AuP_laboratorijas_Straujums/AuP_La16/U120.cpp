/// U120.cpp
/*************************************************************************
U120. Sastādīt C++ programmu, kas ievada 100 reālus skaitļus un noskaidro,
vai tie veido augošu virkni.
**************************************************************************/
/// Autors: Uldis Straujums
/// Izveidots: 19.12.2023.
/// Precizējums: ievada n (ne tikai 100) reālus skaitļus un noskaidro,
///              vai tie veido augošu virkni (nevis stingri augošu virkni)
#include <iostream>
using namespace std;

int main()
{
int ok;     /// lietotāja atbilde: 1 - turpināt, 0 - beigt

do          /// paredz atkārtotu programmas izpildi
{
   int n;
   float* vir;
   cout << "Noskaidro,vai reāli skaitļi veido augošu virkni " <<endl;

   do
   {
    cout << "Ievadiet skaitļu skaitu n, n>=1:" <<endl;
    cin >> n;
    if(n<1) cout <<"Kļūdaina vērtība. Jāievada n, n>=1" << endl;
   }while(n<1);

   vir = new float[n];

   for(int i=0;i<n;i++)
   {
      cout << "Ievadiet reālu skaitli: " << endl;
      cin >> vir[i];
   }
   int i =0;
   bool irAugosa = true;
   while(i<n-1 && irAugosa)
   {
       if(vir[i]>vir[i+1]) irAugosa=false;
       else i++;
   }
   if(irAugosa)
     cout << "Virkne ir augoša:" << endl;
   else
     cout << "Virkne nav augoša:" << endl;

   delete[] vir;
   cout << endl;
   cout << " Vai turpināt (1) vai beigt (0)?" << endl;
   cin >> ok;
}while(ok == 1);
return 0;
}
/*********** Testu plāns *********************
   n   virkne         paredzamais rezultāts
   3    4.5 17.1 -3        nav augoša
   4    4 17 19 25         ir augoša
   2    1 1                ir augoša
   1    7                  ir augoša
   0                   Kļūdaina vērtība
*********************************************/
