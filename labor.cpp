#include "std_lib_facilities.h"
#include <fstream>


int main(){
    int c=0;
    char x=0;
    ifstream ifstr("input.txt");
    ofstream ofstr("output.txt");
   if (!ifstr) {
cout<<"Nem talalhato az input.txt\n";
return 0;
}

while(c<1024*1024*10){
    c++;
ifstr >> x;
ofstr << x;
x=0;
}

ifstr.close();
ofstr.close();

cout<<"Done";
return 0;
}
