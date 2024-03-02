/// 12-2_Att_Viendimensijas masīvs kā funkcijas parametrs
#include <iostream>
#include<cstring>
using namespace std;
int printString (const char s[])
{
cout << s << endl;
};
int main ()
{
char name[10]; // statisks masīvs
strcpy (name, "snow");
printString (name); // masīva padošana funkcijai
char *name2 = new char[10]; // dinamisks masīvs
strcpy (name2, "snow2");
printString (name2); // masīva padošana funkcijai
delete[] name2;
return 0;
}

