/// 12-5_Att_Divdimensiju masīvs kā funkcijas parametrs
#include <iostream>
using namespace std;
int printStrings (const char (*s)[4], int count)
{
for (int i=0; i<count; i++) cout << s[i] << endl;
};
int main ()
{
char arr[2][4] = {{'t', 'h', 'e', '\0'},
{'p', 'i', 'g', '\0'}};
printStrings (arr, 2);
return 0;
}

