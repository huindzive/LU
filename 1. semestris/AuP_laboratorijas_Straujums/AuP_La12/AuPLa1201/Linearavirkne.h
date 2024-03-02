/// Linearavirkne.h
/********************************************
Klase Linearavirkne attēlo virkni, kuras
n-tā locekļa vērtības ir lineāri atkarīgas no
dotiem veseliem skaitļiem a, b, c un d:
V0=a; V1=b;
Vn= c*Vn-1 +d*Vn-2.
Realizētas metodes:
virkne(n) - aprēķina n-to locekli,
print(n) – izdrukā n-to locekli.
********************************************/
/// Autors: Uldis Straujums
/// Izveidota: 14.11.2009.
class Linearavirkne
{
private:
  int a;
  int b;
  int c;
  int d;
public:
  Linearavirkne(int a=1, int b=1, int c=1, int d=1); /// Definē
                                                     /// noklusētos virknes koeficientus a, b, c un d
  ~Linearavirkne();  /// Paziņo par virknes likvidēšanu
int virkne(int n);   /// aprēķina virknes n-to locekli
void print(int n);   /// izdrukā virknes n-to locekli
};

