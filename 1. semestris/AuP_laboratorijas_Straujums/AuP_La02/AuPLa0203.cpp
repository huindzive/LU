#include<iostream>
using namespace std;
int main(){
float x;
float y;
cin >> x;
if (x<-2)                     y = 0;
else if ((-2<=x) && (x<=-1))  y = -x-2;
else if ((-1<=x) && (x<1))    y = x;
else if ((1<=x) && (x<2))     y = -x+2;
else                          y = 0;

cout << y << endl;
}
/***********  Testu plāns *******************************************
    ievade                                     paredzamais rezultāts
    vērtības no katra intervāla galapunktiem,
    vērtības no katra intervāla iekšienes
********************************************************************/
