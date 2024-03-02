/// J.Zuters ZC_Listing 13-4 person
#include <iostream>
#include <cstring>
using namespace std;
class person
{
char name[20];
int age;
public:
person (const char*, int);
void print ()
{
cout << name << " " << age << endl;
}
};
int main ()
{
person p ("Liz", 19);
p.print ();
};
person::person (const char *n, int a)
{
strcpy (name, n);
age = a;
}
