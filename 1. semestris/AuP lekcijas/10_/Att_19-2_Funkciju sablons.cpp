/// Att.19.2 Funkciju šablons J.Zuters
#include <iostream>
using namespace std;
template <typename T>
T add (T a, T b)
{
return a + b;
};
int main ()
{
int x=2, y=3, z;
string s="Hello, ", t="World!", u;
z = add (x, y);
u = add (s, t);
cout << z << endl;
cout << u << endl;
return 0;
}
