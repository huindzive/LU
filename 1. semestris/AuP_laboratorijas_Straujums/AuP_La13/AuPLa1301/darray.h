/**************************
Klase darray attēlo dinamisku veselu skaitļu masīvu ar n elementiem.
Jārealizē metodes:
konstruktors,
kopijas konstruktors,
destruktors,
array_avg() - aprēķina masīva elementu vidējo vērtību un atgriež to,
print_array() – izdrukā masīvu.
Masīva elementu aizpildīšanai realizēt privātu metodi fill_array().
******************************************************************/
class darray
{
   int n;
   int* mas;
public:
    darray(int n); /// izveido dinamisku masīvu ar n elementiem,
                   /// aizpilda masīvu ar lietotāja ievadītām vērtībām
    darray(const darray &m2);
    ~darray();
    float array_avg(); /// atgriež masīva elementu vidējo vērtību
    void print_array(); /// izdrukā masīvu
private:
    void fill_array(); /// aizpilda masīvu ar lietotāja ievadītām vērtībām
};
