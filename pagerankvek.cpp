#include <std_lib_facilities.h>

void kiir(vector <double> v, int db);
double tavolsag(vector <double> PR,vector <double> PRv,int n);
int main(){
double L[4][4] = {
    {0.0, 0.0, 1.0/3.0, 0.0},
    {1.0, 1.0/2.0, 1.0/3.0, 1.0},
    {0.0, 1.0/2.0, 0.0, 0.0},
    {0.0, 0.0, 1.0/3.0, 0.0}
};

vector<double> PR;
vector<double> PRv;
for (int i=0;i<4;i++) {
PR.push_back(0.0);
PRv.push_back(1.0/4.0);
}
int i,j;

for (;;){
    for (i=0;i<4;i++){
        PR[i] = 0.0;
            for (j=0;j<4;j++)
                PR[i]+=(L[i][j]*PRv[j]);

    }

   if (tavolsag(PR, PRv,4)<0.00000001) break;

    for (i=0;i<4;i++)
        PRv[i]=PR[i];

}

kiir(PR,4);
return 0;
}

void kiir(vector <double> v, int db){
    for (db : v)
        cout<<db<<" ";

}
double tavolsag(vector <double> PR,vector <double> PRv,int n){
    double tavols = 0;
    for (int i=0;i<n;i++)
        tavols=tavols+abs(PR[i]-PRv[i]);
    return tavols;
}
