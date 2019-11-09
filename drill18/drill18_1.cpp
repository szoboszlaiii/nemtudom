#include "std_lib_facilities.h"

int ga[10]={1,2,4,8,16,32,64,128,256,512};
int aa[10];
void kiir(int k[], int n) {
    for (int i=0;i<n;i++) cout<<k[i]<<" ";
}


void f(int k[],int n){
int la[10];
for (int i=0;i<=10;i++) la[i]=ga[i];
kiir(la,10);
cout<<'\n';
int* p = new int[n];
for (int i=0;i<n;++i) p[i]=la[i];
kiir(p,10);
cout<<'\n';
delete[] p;
kiir(aa,10);
}


int main(){
try {
    f(ga,10);
    int fact=1;

    for(int i = 1; i <=10; ++i)
    {
        fact*= i;
        aa[i-1]=fact;
    }
    f(aa,10);
    }


catch (exception& e) {
    cerr << "Hiba: " << e.what() << endl;
}
catch (...) {
    cerr << "Hiba\n";
}
keep_window_open();
return 0;
}
