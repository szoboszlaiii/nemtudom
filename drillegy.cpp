//Nem vagyok valami jó angolból, nézzétek el nekem :D
#include "std_lib_facilities.h"
int main()
{
    string first_name;
    string friend_name;
    int  age=0;
    char friend_sex=0;
    
    cout<<"Kinek szeretnel irni?:\n";
    cin>>first_name;
    cout<<"Kedves "<<first_name<<", Hogy vagy ?\n";
     
     
    cout<<"Add meg a baratod nevet\n";
    cin>>friend_name;
    cout<<"Reg lattam "<<friend_name<<"-et, te lattad mostanaban?\n"
    cout<<"Mi a neme? ha ferfi akkor 'f' a valasz, ha no akkor 'n' \n";
    cin>>friend_sex;
    
    if (friend_sex=='f') {
        cout<<"Mond meg neki hogy hivjon fel (ferfi)\n";
        }
    else if (friend_sex=='n'){
        cout<<"Mond meg neki hogy hivjon fel (no)\n";
    }  

   cout<<"Hany eves ? :\n";
    cin>>age;
    
    if (age<0 || age>110){
       simple_error("te most viccelsz!");
        }  
        
cout <<"Hallottam most volt a " << age << ". szuletesnapod.\n" ;

if ( age < 12 )
	cout <<"Jovore " << age + 1 << " leszel.\n" ;
else if (age == 17)
	cout << "Jovore mar szavazhatsz. \n" ;
else if (age > 70)
	cout <<"Remelem elvezed a nyugdijadat! \n";
	
	
 cout<<"Udvozlettel\n\nIstvan\nIstvan"   ;
 
 
  return 0;

}