/// 12-8_Att_Dinamisks divdimensiju masīvs kā funkcijas parametrs
#include <iostream>
#include<cstring>
using namespace std;
int printStrings (char **s, int count)
{
for (int i=0; i<count; i++) cout << s[i] << endl;
};
int main ()
{
char **darr = new char*[2]; // pirmā dimensija
for (int i=0; i<2; i++) darr[i] = new char[4]; // 2. dim.
strcpy (darr[0], "THE");
strcpy (darr[1], "COW");
printStrings (darr, 2);
// abu dimensiju elementu likvidēšana, sākot ar 2.:
for (int i=0; i<2; i++) delete[] darr[i];
delete[] darr;
return 0;
}
