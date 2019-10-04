#include "std_lib_facilities.h"

int main(){
cout<<"Add meg az erteket majd az operatorokat(+,-,/,*)\n'q' a kilepes\n";
double a,b,d;
double c=0;
char op;
cout<<"1.Ertek: ";
cin>>a;
cout<<"Operator: ";
cin>>op;
cout<<"2.Ertek: ";
cin>>b;
switch(op){
    case '+' : c=a+b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '-' : c=a-b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '/' : c=a/b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '*' : c=a*b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case 'q' : exit(0); break;
    default: cout<<"Nincs ilyen lehetoseg\n"; main(); break;}

while(cin){
cout<<"Operator: ";
cin>>op;
cout<<"Ertek: ";
cin>>d;
switch(op){
    case '+' : c+=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '-' : c-=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '/' : c/=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '*' : c*=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    case 'q' : exit(0); break;
    default: cout<<"Nincs ilyen lehetoseg\n"; break;}
}

cout<<"Vegeredmeny: "<<c;

return 0;
}
