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
strncpy (name, n, 19); name[19] = '\0';/// garantē korektu zema līmeņa virkni
/// garantē korektu vecuma vērtību
if (a>0 and a<150) age = a;
else age=17;
}
