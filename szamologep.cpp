/*Használat
Add meg az erteket majd az operatorokat(+,-,/,*)
'q' a kilepes
5-1
Eredmeny: 4
+8
Eredmeny: 12
*2
Eredmeny: 24
+9
Eredmeny: 33
-3
Eredmeny: 30
*/

#include "std_lib_facilities.h"

int main(){
cout<<"Add meg az erteket majd az operatorokat(+,-,/,*)\n'q' a kilepes\n";
double a,b,d;
double c=0;
char op;
cin>>a;
cin>>op;
cin>>b;
switch(op){
    case '+' : c=a+b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '-' : c=a-b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '/' : c=a/b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '*' : c=a*b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case 'q' : exit(0); break;
    default: cout<<"Nincs ilyen lehetoseg\n"; main(); break;}

while(cin){
cin>>op;
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
