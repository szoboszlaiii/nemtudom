#include "std_lib_facilities.h"

int main(){
int a=9,b=4;

a=a+b;
b=a-b;
a=a-b;

cout<<"a="<<a<<'\n'<<"b="<<b<<'\n';

a=a*b;
b=a/b;
a=a/b;

cout<<"a="<<a<<'\n'<<"b="<<b<<'\n';

return 0;

}