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
try{
cout<<"Add meg az ertekeket, operatorok(+,-,/,*)\nPelda:2+4\n6\n-4\n'q' a kilepes\n";
double d,a,b;
double c=0;
char op;
if(cin){
cin>>a>>op>>b;
switch(op){
    case '+' : c=(double)a+(double)b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '-' : c=a-b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '/' : c=a/b; if (b==0) error("0-val nem osztunk\n"); else cout<<"Eredmeny: "<<c<<"\n"; break;
    case '*' : c=a*b; cout<<"Eredmeny: "<<c<<"\n"; break;
    case 'q' : exit(0); break;
    default :  error("Nincs ilyen lehetoseg\n"); break;}
}
while(cin){
cin>>op>>d;
switch(op){
    case '+' : c+=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '-' : c-=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    case '/' : if (d==0) error("0-val nem osztunk\n"); else {c/=d; cout<<"Eredmeny: "<<c<<'\n';} break;
    case '*' : c*=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    case 'q' : exit(0); break;
    default:   error("Nincs ilyen lehetoseg\n"); break;}
}

cout<<"Vegeredmeny: "<<c;
        return 0;
	}

	catch (exception& e) {
		cerr << "Hiba: " << e.what() << endl;
		char p;
		while (cin >> p && p != ';');
		return 1;
	}
	catch (...) {
		cerr << "Hiba\n";
		char p;
		while (cin >> p && p != ';');
		return 2;
	}

}
