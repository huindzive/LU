/// Masivmanip.cpp
/************************************************************
Realizē klasi Masivmanip, kurā tiek glabāts
veselu skaitļu masīvs ar n komponentiem.
Klasei realizētas šādas metodes:
(1) konstruktors, kas aizpilda masīva n komponentu
vērtības ar nullēm,
(2) destruktors, kurš paziņo par objekta likvidēšanu,
(3) metode "mainit" ar 2 parametriem -
indeksu un vērtību, kas izmaina masīva doto komponenti,
(4) metode "drukat", kas izdrukā uz ekrāna
masīva komponentes.
**************************************************************/
/// Autors: Uldis Straujums
/// Veidota: 22.11.2017
/// Mainīta: 16.11.2020 Programmmas kodējums pārveidots uz UTF-8
#include <iostream>
using namespace std;
class Masivmanip
{
private:
    int n;
    int* mas;
public:
    Masivmanip(int n);     /// n>=1
    ~Masivmanip();
void mainit(int indekss, int vertiba); /// 0<=i<=n-1
void drukat();
};
int main()
{
    Masivmanip m1(4);
    Masivmanip* dm;
    int n;

    m1.drukat();  /// 0 0 0 0
    m1.mainit(1, 17);
    m1.drukat();  /// 0 17 0 0
    m1.mainit(12, 25);
    m1.drukat();  /// 0 17 0 0

    cout << "Izveido dinamiskā veidā objektu un pielieto visas metodes"<<endl;
    cout << "Ievadiet komponentu skaitu:"<< endl;
    cin >> n;                /// 5
    dm = new Masivmanip(n);
    dm->drukat();  /// 0 0 0 0 0
    dm->mainit(1, 17);
    dm->drukat();  /// 0 17 0 0 0
    dm->mainit(12, 25);
    dm->drukat();  /// 0 17 0 0 0

    delete dm;

    return 0;
}
/// Metožu realizācijas
Masivmanip::Masivmanip(int n)
{
     this->n = (n>=1)?n:3;
     mas = new int[this->n];
     for (int i=0; i<this->n; i++)
      mas[i] = 0;
}
Masivmanip::~Masivmanip()
{
     delete[] mas;
     cout << "Objekts "<< this << " tiks iznīcināts" << endl;
}
void Masivmanip::mainit(int indekss, int vertiba)
{
  if (indekss>=0 && indekss<=n-1)
     mas[indekss] = vertiba;
  return;
}
void Masivmanip::drukat()
{
   cout << "Masīva " << n << " komponenti ir:"<< endl;
   for (int i=0; i<n; i++)
    cout << mas[i] << ' ';
    cout << endl;
    return;
}
