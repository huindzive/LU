/// Ported to C++  Listing 8.9: arithmeticeval.py
/// R.L. Halterman. Fundamentals of Python Programming, 2019
#include<iostream>
using namespace std;
int add(int x, int y)
{
return x + y;
}
int multiply(int x, int y)
{
return x * y;
}
int evaluate(int (*func)(int, int), int x, int y)
{
   return func(x, y);
}

int main()
{
   cout << add(2, 3) << endl;                 /// 5
   cout << multiply(2, 3) << endl;            /// 6
   cout << evaluate(add, 2, 3) << endl;       /// 5
   cout << evaluate(multiply, 2, 3) << endl;  /// 6
}
