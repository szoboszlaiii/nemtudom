#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n) {
    for (int i = 0; i<n; ++i)
        os << a[i] << "\n";
}

void print_vector(ostream& os, vector<int> v) {
    for (int i = 0; i<v.size(); ++i)
        os << v[i] << "\n";
}

int main(){
try{

int k = 7;
int* p1 = &k;

cout<<p1<<"\n";
cout<<*p1<<"\n";



    int* p2 =new int[7];

    for(int i=1;i<7;i++)
       p2[i]=pow(2,i);

    cout<<p2;
    print_array(cout,p2,7);


int* p3 = p2;
p2 = p1;
p2 = p3;

    cout << "p1: " << p1 << "\n";
    cout << "*p1: " << *p1 << "\n";
    cout << "p2: " << p2 << "\n";
    cout << "*p2: " << *p2 << "\n";


    delete[] p2;
    p1 = new int[10];
    for (int i = 0; i<10; ++i)
        p1[i] = pow(2,i);
    p2 = new int[10];


for (int i = 0; i<10; ++i)
    p2[i] = p1[i];
print_array(cout,p2,10);
vector<int> v;
for (int i = 0; i<10; ++i)
    v.push_back(pow(2,i));
vector<int> v2;
for (int i = 0; i<v.size(); ++i)
    v2.push_back(v[i]);
print_vector(cout,v2);

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
