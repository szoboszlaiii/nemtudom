#include "std_lib_facilities.h"

enum class Month
{jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

class Year {                                                         // year in [min:max) range
          static const int min = 1800;
          static const int max = 2200;
public:
          class Invalid { };
          Year(int x) : y{x} { if (x<min || max<=x) throw Invalid{}; }
          int year() { return y; }
private:
          int y;
};


class Date {
public:
	Date(Year y, Month m, int d);
	void add_day(int n);
	Month month() { return m; }
	int day() { return d; }
	Year year() { return y.year(); }
private:
    Year y;                                               // year
    Month m;
    int d;                                                //day
};

 Date::Date(Year yy, Month mm, int dd) // constructor
            :y{yy}, m{mm}, d{dd}
 {
	if ((int)m < 1 || (int)m > 12) error("Nincs ilyen honap");
	if (d < 1 || d > 31) error("Nincs ilyen nap");
}

void Date::add_day(int n) {
	d += n;
}

void f(){
        Date today{ Year{2019}, Month::nov, 8 };

		//Date invalid{ Year{2019}, Month::val, 8 };
        cout<<today.year()<<"/"<<today.month()<"/"<<today.day()<<'\n';
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
