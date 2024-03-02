/// masiva_garums.cpp
#include <iostream>
using namespace std;
void func(int *p)
     {
      cout << "NOT length of array = " << (sizeof(p)/sizeof(*p)) << endl;  /// 1 (2 on a 64-bit system)
      cout << "Size of a pointer: " << sizeof(p) << endl;                  /// 4 (8 on a 64-bit system)
     }
int main()
{
     int a[7];
     cout << "Length of array = " << (sizeof(a)/sizeof(*a)) << endl;   /// 7

     func(a);

}
