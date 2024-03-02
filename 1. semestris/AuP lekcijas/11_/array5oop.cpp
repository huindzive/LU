#include<iostream>
using namespace std;
class array5 { /// class named array5
private:
    int aa[5]; /// 1 8 4 6 5
public:
    array5() {
        for (int i=0;i<5;++i) aa[i]=0;
    }
    ~array5() {
        cout<<"This is destructor."<<endl;
    }
    int at(int i) {
        return aa[i];
    }
    void fill_array() {
        for (int i=0;i<5;++i) cin>>aa[i];
    }
    void print_array() {
        for (int i=0;i<5;++i) cout<<aa[i]<<" ";
        cout<<endl;
    }
    double array_avg() {
        double sum=0;
        for (int i=0;i<5;++i) sum+=aa[i];
        return sum/5;
    }
};
int main() {
    array5 x; /// object named x of datatype array5
    x.print_array();
    x.fill_array();
    x.print_array();
    cout<<x.array_avg()<<endl;
    cout<<x.at(3)<<endl;
///    cout<<x.aa[3]<<endl; /// 6
}
