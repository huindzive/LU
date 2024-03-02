/*******************************************************************
Uldis Straujums, us22011
AuPLa1402. Izveidot C++ funkciju, kas no dotās teksta rindiņas izveido jaunu rindiņu,
liekot jaunajā teksta rindiņā no dotās rindiņas tikai ciparus.
Jaunajā teksta rindiņā aiz katra cipara jāliek tam atbilstošais nosaukums.
Piemēram, no rindiņas "Abra  31 laba" ir jāizveido rindiņa "3trīs1viens".
Izveidot funkcijas divas versijas:
1)	 dotā teksta rindiņa kā zema līmeņa simbolu virkne,
2)	 dotā teksta rindiņa kā augsta līmeņa simbolu virkne.
Izveidot C++ programmu izveidoto funkciju pārbaudei.
Teksta rindiņas ievada lietotājs.
Programma izveidota: 8.12.2023.
****************************************************************************/
#include<iostream>
#include<cstring>
using namespace std;
/***************************************************************************
void nosauktiCipari(char* rin, char* jrin);
Funkcija nosauktiCipari(rin, jrin)
no dotās teksta rindiņas rin (zema līmeņa simbolu virkne) simboliem izveido
teksta rindiņu jrin (zema līmeņa simbolu virkne),
liekot teksta rindiņā jrin no dotās rindiņas rin tikai ciparus.
Jaunajā teksta rindiņā jrin aiz katra cipara liek
tam atbilstošo nosaukumu.
****************************************************************************/
void nosauktiCipari(char* rin, char* jrin)
{
  const string NOS[10]={"nulle", "viens", "divi", "trīs", "četri",
            "pieci", "seši", "septiņi", "astoņi", "deviņi"};

  int j = 0; /// pozīcija rindiņā jrin kārtējā simbola pievienošanai
  for (int i=0;i<strlen(rin);i++)
  {
    if(isdigit(rin[i]))
    {
        /// pievieno jrin pozīcijā j ciparu rin[i]
        /// pievieno jrin pozīcijā j+1 ciparam atbilstošo nosaukumu
        /// panāk, ka j ir pozīcija kārtējā cipara pievienošanai
        jrin[j]=rin[i];
        strncpy(&jrin[j+1], NOS[rin[i]-'0'].c_str(), strlen(NOS[rin[i]-'0'].c_str()));
        j+= 1 + strlen(NOS[rin[i]-'0'].c_str());
    }
  }
   jrin[j]= '\0'; /// noformē korektu zema līmeņa simbolu virkni
}
/********************************************************************
string nosauktiCipari(string rin)
Funkcija nosauktiCipari(rin)
atgriež kā rezultātu augsta līmeņa simbolu virkni, kas veidota no
dotās teksta rindiņas rin (augsta līmeņa simbolu virkne),
liekot jaunajā teksta rindiņā no dotās teksta rindiņas tikai ciparus.
Jaunajā teksta rindiņā aiz katra cipara liek
tam atbilstošo nosaukumu.
*********************************************************************/
string nosauktiCipari(string rin)
{
  const string NOS[10]={"nulle", "viens", "divi", "trīs", "četri",
            "pieci", "seši", "septiņi", "astoņi", "deviņi"};

  string jrin="";
  for (int i=0;i<rin.length();i++)
  {
    if(isdigit(rin[i]))
    {
        /// pievieno jrin ciparu rin[i] un
        /// ciparam atbilstošo nosaukumu
        jrin+=rin[i];
        jrin+=NOS[rin[i]-'0'];
    }
  }
  return jrin;
}
int main()
{
    char rindina[21];
    char jrindina[20 + 20*8 + 1]; /// ņemts vērā robežgadījums - dotā rindiņa sastāv tikai no cipariem,
                                  /// maksimālais nosaukuma garums ciparam (8)
                                  /// beigās nulles simbols

    cout <<"Ievadiet teksta rindinu, ne garāku par 20 simboliem: "<<endl;
    cin.getline(rindina, 21);       ///   "Abra  31 laba"
    nosauktiCipari(rindina, jrindina);
    cout << jrindina<< endl;        ///   "3trīs1viens"
    string arindina;
    cout <<"Ievadiet teksta rindinu: "<<endl;
    getline(cin, arindina);                  ///   "Abra  31 laba"
    cout << nosauktiCipari(arindina)<< endl; ///   "3trīs1viens"
}
