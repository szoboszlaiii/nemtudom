#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a){
    for (int i=0;i<10;i++)
        os<<a[i]<<" ";
        cout<<"\n";
}

void print_array(ostream& os, int* a, int n){
    for (int i=0;i<n;i++)
        os<<a[i]<<" ";
                cout<<"\n";

}

void print_vector(ostream& os, vector<int> v) {
    for (int i = 0; i<v.size(); ++i)
        os << v[i] << "\n";
}

int main(){
try{
int* p=new int[10];

   for (int i = 0; i<10; i++)
        cout << p[i] << "\n";

delete[] p;


int* p2 = new int[10];

    for (int i = 0; i<10; ++i)
           p2[i] = 100 + i;

    print_array10(cout,p2);
    delete[] p2;


int* p3=new int[10];

    for (int i = 0; i<11; ++i)
           p3[i] = 100 + i;
    print_array(cout,p3,11);

    delete[] p3;


int* p4=new int[20];

    for (int i = 0; i<20; ++i)
           p4[i] = 100 + i;

    print_array(cout,p4,20);

    delete[] p4;


    vector<int> v;

    for (int i = 0; i<10; ++i)
        v.push_back(100+i);

    print_vector(cout,v);

    cout << "\n";

    vector<int> v2;

    for (int i = 0; i<11; ++i)
        v2.push_back(100+i);

    print_vector(cout,v2);

    cout << "\n";
    vector<int> v3;

    for (int i = 0; i<20; ++i)
        v3.push_back(100+i);

    print_vector(cout,v3);
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
