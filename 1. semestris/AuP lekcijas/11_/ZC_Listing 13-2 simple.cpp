/// J.Zuters Attēls 13-2 simple -
/// papildināts ar konstruktora un destruktora metodēm
#include <iostream>
using namespace std;
class simple
{
int a;
public:
simple()
{
 a = 17;
}
~simple()
{
    cout <<"Objekts likvidēts"<<endl;
}
void set (int x) { a = x; }
void print () { cout << a << endl; }
};
int main ()
{
simple s;
s.print();   /// 17
s.set (99);
s.print();   /// 99
return 0;
}
