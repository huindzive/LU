#include<iostream>
using namespace std;
int main() {
    const int n=10;
    for(int i=0;i<n*n;++i) {
        cout<<"*";
        if(i%n==n-1)cout<<'\n';
    }
    cout<<endl;
    for(int i=0;i<n;++i) {
        cout<<"**********\n";
    }
    cout<<endl;
    for(int r=0;r<n;++r) {
        for(int k=0;k<n;++k) {
            cout<<"*";
        }
        cout<<endl;
    }
}
