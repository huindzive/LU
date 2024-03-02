#include<iostream>
#include"darray.h"
using namespace std;
darray::darray(int n) /// izveido dinamisku masīvu ar n elementiem,
                      /// aizpilda masīvu ar lietotāja ievadītām vērtībām
{
  this->n = (n>=1)?n:3;
  mas = new int[this->n];
  fill_array();
  cout <<"Objekts tika izveidots"<<endl;
}
    darray::darray(const darray &m2)
{
    n = m2.n;
    mas = new int[n];
    for(int i=0;i<n;i++) mas[i]=m2.mas[i];
    cout <<"Objekts tika izveidots kā kopija"<<endl;
}
    darray::~darray()
{
    delete[] mas;
    cout <<"Objekts tiks likvidēts"<<endl;
}
    float darray::array_avg() /// atgriež masīva elementu vidējo vērtību
{
    int sum=0;
    for(int i=0;i<n;i++) sum+=mas[i];
    return (float)sum/n;
}
    void darray::print_array() /// izdrukā masīvu
{
    for(int i=0;i<n;i++) cout<<mas[i]<<' ';
    cout << endl;
}
    void darray::fill_array() /// aizpilda masīvu ar lietotāja ievadītām vērtībām
{
     cout <<"Ievadiet "<< n << " vērtības"<< endl;
     for(int i=0;i<n;i++)
     {
         cout <<"Ievadiet "<<i+1<<".elementa vērtību:"<<endl;
         cin >> mas[i];
     }
}
