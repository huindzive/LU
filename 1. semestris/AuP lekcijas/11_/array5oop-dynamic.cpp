#include<iostream>
using namespace std;
class darray { /// class named darray
private:
    int n;
    int *aa;
public:
    darray(int _n) {
        if (_n>=1) n = _n;
        else n = 1;
        aa = new int[n];
        for (int i=0;i<n;++i) aa[i]=0;
    }
    ~darray() {
        cout<<"This is destructor."<<endl;
        delete[] aa;
    }
    int at(int i) {
        return aa[i];
    }
    void fill_array() {
        for (int i=0;i<n;++i) cin>>aa[i];
    }
    void print_array() {
        for (int i=0;i<n;++i) cout<<aa[i]<<" ";
        cout<<endl;
    }
    double array_avg() {
        double sum=0;
        for (int i=0;i<n;++i) sum+=aa[i];
        return sum/n;
    }
};
int main() {
    darray x(-1); /// object named x of datatype array5
    x.print_array();   /// 0
    x.fill_array();    /// 1
    x.print_array();   /// 1
    cout<<x.array_avg()<<endl;
    cout<<x.at(3)<<endl;  /// arbitrary value (array has only one element)
    darray* dx;
    dx = new darray(3);
    dx->print_array();
    delete dx;
}
