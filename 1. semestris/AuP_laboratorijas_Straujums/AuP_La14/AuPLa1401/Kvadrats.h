/***************************************************************************
Klasei Kvadrats jāapraksta ģeometriska figūra “kvadrāts “ un darbības ar to.
Klasei izveidot šādas metodes:
(1) konstruktors, kas izveido kvadrātu ar malas garumu a,
(2) konstruktors, kas izveido kvadrātu kā cita kvadrāta kopiju,
(3) destruktors, kurš paziņo par objekta likvidēšanu,
(4) metode laukums (), kas aprēķina kvadrāta laukumu,
(5) metode mainit(v),
kas piešķir kvadrāta malas garumam vērtību v,
(6) metode drukat(), kas izdrukā uz ekrāna kvadrāta malas garumu un laukumu.
****************************************************************************/
class Kvadrats
{
  float mala;
  public:
      Kvadrats(float a);
      Kvadrats(const Kvadrats &kv2);
      ~Kvadrats();
      float laukums();
      void mainit(float v);
      void drukat();
};
