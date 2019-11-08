#include "std_lib_facilities.h"


class Date {
	int y, m, d;
public:
	Date(int y, int m, int d);
	void add_day(int n);
	int month() { return m; }
	int day() { return d; }
	int year() { return y; }
};

 Date::Date(int yy, int mm, int dd) // constructor
            :y{yy}, m{mm}, d{dd}
 {
	if (m < 1 || m > 12) error("Nincs ilyen honap");
	if (d < 1 || d > 31) error("Nincs ilyen nap");
}

void Date::add_day(int n) {
	d += n;
}

void f(){
        Date today{ 2019, 11, 8 };
        cout<<today.day()<<"/"<<today.month()<<"/"<<today.year()<<'\n';
		//Date invalid{ 8, 11, 2019 };
        //cout<<invalid.day()<<invalid.month()<<invalid.year()<<'\n';
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
