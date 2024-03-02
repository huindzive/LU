/// J.Zuters Attēls 13-2 simple private
#include <iostream>
using namespace std;
class simple
{
private:
int a;
public:
void set (int x) { a = x; }
void print () { cout << a << endl; }
int get() { return a;}
};
int main ()
{
simple s;
int dubult;
s.set (99);
s.print();
dubult = 2*s.get();
cout << dubult << endl;
///cout << s.a<<endl;
return 0;
}
