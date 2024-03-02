#include<iostream>
#include"Kvadrats.h"
using namespace std;
      Kvadrats::Kvadrats(float a)
{
      mala = (a>0)?a:17;
}
      Kvadrats::Kvadrats(const Kvadrats &kv2)
{
      mala = kv2.mala;
}
      Kvadrats::~Kvadrats() {}

      float Kvadrats::laukums()
{
      return mala*mala;
}
      void Kvadrats::mainit(float v)
{
      if(v>0) mala = v;
}
      void Kvadrats::drukat()
{
      cout << mala << ' '<< laukums()<<endl;
}
