// funkcijas parslogosana.cpp
#include<iostream>
using namespace std;
// funkcijas realizācija
void add (int& r, int a, int b)
{
  r = a + b;

}
// funkcijas realizācija
int add (int a, int b)
{
 return a + b;
}
int main()
{
int x=3, y=4, z1, z2;
z1 = add (x, y);
add (z2, x, y);
cout << z1 << ' ' << z2 << endl;  // 7 7
}
