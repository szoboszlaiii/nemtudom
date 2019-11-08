#include "std_lib_facilities.h"


struct Date {
          int y, m, d;                            // year, month, day
          Date(int yy, int mm, int dd);      // check for valid date and initialize
          void add_day(int n);           // increase the Date by n days
};

 Date::Date(int yy, int mm, int dd)         // constructor
          :y{yy}, m{mm}, d{dd}
 {
	if (m < 1 || m > 12) error("Nincs ilyen honap");
	if (d < 1 || d > 31) error("Nincs ilyen nap");
}

void Date::add_day(int n) {
	d += n;
}
void f(){
        Date birthday(2002,7,8);
		//Date invalid(2002,-7,8);
        cout << birthday.d << '/' << birthday.m << '/' << birthday.y << '\n';
		//cout << invalid.d << '/' << invalid.m << '/' << invalid.y << '\n';
}
int main()
{
    try{
    f();
    }
	catch (exception& e) {
		cout<<e.what()<<'\n';
	}

	keep_window_open();
    return 0;
}
