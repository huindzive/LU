// nosacijuma funktors.cpp
#include<iostream>
using namespace std;
/* conditional ?: operator
  Exp1 ? Exp2 : Exp3;
*/
int main()
{
int y;
int v;
y = 5;
//y= 10;

if(y < 10) {
   v = 30;
} else {
   v = 40;
}

//v = (y < 10) ? 30 : 40;
cout << v << endl;
}
