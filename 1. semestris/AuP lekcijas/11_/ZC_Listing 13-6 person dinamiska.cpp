/// J.Zuters ZC_Listing 13-6 person
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
person *pp; // mainīgā deklarēšana
pp = new person ("Peter", 20); // objekta izveidošana
pp->print ();
delete pp; // objekta likvidēšana
}
person::person (const char *n, int a)
{
strncpy (name, n, 19); name[19] = '\0';/// garantē korektu zema līmeņa virkni
if (a>0 and a<150) age = a;
else age=17;
}
