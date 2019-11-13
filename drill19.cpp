#include "std_lib_facilities.h"

 template<typename T> struct S {
   private:
    T val;
      public:
        S(T val){this->val = val;}
        T& get();
        T& get() const;
        void set(const T& k);
        T& operator=(const T& k);
        void read_val(T& v);

};

template<typename T>T& S<T>::operator=(const T& k)
 {
     val=k;
     return val;
 }
 template<typename T>T& S<T>::get()
{
    return val;
}
template<typename T>T& S<T>::get() const
{
     return val;
}
template<typename T>void S<T>::set(const T& k)
 {
val = k;
//return val;
 }

template<typename T>void read_val(T& v)
{
    //cin>>v;
}




int main(){
try{
    S<int> szam(2);
    S<char> karak('k');
    S<double> lebego(97.66);
    S<string> szoveg("Istvan");
    vector <int> vv;
    for (int i=1;i<=3;i++) vv.push_back(i);
    S< vector<int> > vec(vv);

/*  cout<<szam.val<<'\n';
    cout<<karak.val<<'\n';
    cout<<lebego.val<<'\n';
    cout<<szoveg.val<<'\n';
    for (int i=1;i<=3;i++) cout<<vec.val[i-1]<<" ";*/

    cout<<szam.get()<<'\n';
    cout<<karak.get()<<'\n';
    cout<<lebego.get()<<'\n';
    cout<<szoveg.get()<<'\n';
    for (int i=1;i<=3;i++) cout<<vec.get()[i-1]<<" ";
    cout<<'\n';

    szam.set(15);
    karak.set('b');
    lebego.set(7.489);
    szoveg.set("Nem");
    for (int i=1;i<3;i++) vv.push_back(i+47);
    vec.set(vv);

    cout<<szam.get()<<'\n';
    cout<<karak.get()<<'\n';
    cout<<lebego.get()<<'\n';
    cout<<szoveg.get()<<'\n';
    for (int i=1;i<=3;i++) cout<<vec.get()[i]<<" ";
    cout<<'\n';


    read_val(szam);
    read_val(karak);
    read_val(lebego);
    read_val(szoveg);
    read_val(vec);

    cout<<szam.get()<<'\n';
    cout<<karak.get()<<'\n';
    cout<<lebego.get()<<'\n';
    cout<<szoveg.get()<<'\n';
    cout<<vec.get()[2]<<" ";


    return 0;

}

catch (exception& e) {
    cerr << "Hiba: " << e.what() << "\n";
}
catch (...) {
    cerr << "Hiba\n";
}
}
