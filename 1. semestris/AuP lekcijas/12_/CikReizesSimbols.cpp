/// CikReizesSimbols.cpp
/*********************************************************************************
Uldis Straujums, us22011
Cik reizes simbols. Sastādīt C++ programmu, kas ļauj lietotājam ievadīt teksta rindiņu un
patvaļīgu simbolu un noskaidro, cik reizes ievadītais simbols ir sastopams ievadītajā teksta rindiņā.
Rezultāta iegūšanai sastādīt funkciju, kas apstrādā zema līmeņa simbolu virkni un
sastādīt funkciju, kas apstrādā augsta līmeņa simbolu virkni.
Programma izveidota: 24.11.2022.
mainīta: 2.12.2022. Pielikta rekursīva realizācija funkcijām
*********************************************************************************/
#include<iostream>
#include<cstring>

using namespace std;
/*******************************************************
int ciRreizes(char *rin, char s);
Funkcija cikReizes(rin, s)
 atgriež kā rezultātu, cik reizes simbols s ir sastopams
 zema līmeņa simbolu virknē rin.
********************************************************/
int cikReizes(char *rin, char s)
{
 int reizes =0;

 for (int i=0;i<strlen(rin);i++)
 {
  if(rin[i]==s) reizes++;
 }
 return reizes;
}
/****************************************************
int ciRreizes(string rin, char s);
Funkcija cikReizes(rin, s)
 atgriež kā rezultātu, cik reizes simbols s ir sastopams
 augsta līmeņa simbolu virknē rin.
****************************************************/
int cikReizes(string rin, char s)
{
 int reizes =0;

 for (int i=0;i<rin.length();i++)
 {
  if(rin[i]==s) reizes++;
 }
 return reizes;
}
/*******************************************************
int cik_rekur(char *rin, char s);
Funkcija cik_rekur(rin, s)
 atgriež kā rezultātu, cik reizes simbols s ir sastopams
 zema līmeņa simbolu virknē rin.
********************************************************/
int cik_rekur(char* v, char s)
{
    if (strlen(v)==0) return 0;
    if(v[0]==s) return 1+cik_rekur(v+1, s);
    return cik_rekur(v+1, s);
}
/*******************************************************
int cik_rekur(string rin, char s);
Funkcija cik_rekur(rin, s)
 atgriež kā rezultātu, cik reizes simbols s ir sastopams
 augsta līmeņa simbolu virknē rin.
********************************************************/
int cik_rekur(string v, char s)
{
    if (v.length()==0) return 0;
    if(v[0]==s) return 1+cik_rekur(v.substr(1), s);
    return cik_rekur(v.substr(1), s);
}
int main()
{
char zv[11];
char simb;
string av;
int ok;
do
{
cout <<" Ievadiet teksta rindiņu, ne garāku par 10 simboliem: " << endl;
cin.getline(zv, 11);
cout << "Ievadiet meklējamo simbolu: "<< endl;
cin.get(simb);
cin.ignore(); /// Lai izņemtu no plūsmas ENTER simbolu
cout << "Zema līmeņa virknē \""<<zv <<"\" simbols '"
     << simb << '\''<< " ir sastopams "<<cikReizes(zv, simb)<<" reizes"<<endl;

cout <<"Ievadiet teksta rindiņu: " << endl;
getline(cin, av);
cout << "Ievadiet meklējamo simbolu: "<< endl;
cin.get(simb);
cin.ignore(); /// Lai izņemtu no plūsmas ENTER simbolu
cout << "Augsta līmeņa virknē \""<<av <<"\" simbols '"
     << simb << '\''<< " ir sastopams "<<cikReizes(av, simb)<<" reizes"<<endl;

cout << "Rekursīvi realizētas funkcijas rezultāts zema līmeņa simbolu virknei: "
     << cik_rekur("abc a ", 'a')<< endl;  /// 2
cout << "Rekursīvi realizētas funkcijas rezultāts augsta līmeņa simbolu virknei: "
     << cik_rekur("12 34 ", '&')<< endl;  /// 0
cout << endl;
cout << " Vai turpināt (1) vai beigt (0)?" << endl;
cin >> ok;
}while(ok == 1);

}
/************** Testu plāns **********************
rindiņa        simbols     paredzamais rezultāts
"abc a  "         'a'         2
"   1 2 "         ' '         6
""                '5'         0
"12 34 "          '&'         0
**************************************************/
