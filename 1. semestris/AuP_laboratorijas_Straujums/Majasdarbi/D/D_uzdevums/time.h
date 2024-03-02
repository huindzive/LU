/*
  Klase "Time"
  apraksta laiku stundās, minūtēs un sekundēs.
  Ir metodes:
    Time(h,m,s);              - konstruktors,
    ~Time();                  - destruktors,
    change(h,m,s);            - Izveido iekšēji izmantojamus mainīgos,
    print();                  - izdrukā laika raksturlielumus,
    distance(Time);           - aprēķina starpību starp objektiem, izdrukā to.
*/
using namespace std;

class Time {
private:
    int hour, minute, second;

public:
    Time(int h, int m, int s);
    ~Time();
    void change(int h, int m, int s);
    void print() const;
    void distance(const Time& other) const;
};
