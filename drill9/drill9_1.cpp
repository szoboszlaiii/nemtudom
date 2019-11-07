#include "std_lib_facilities.h"


struct Date {
	int y;	// year
	int m;	// month in year
	int d;	// day of month
};

void init_day(Date& dd, int y, int m, int d) {
	if (m < 1 || m > 12) error("Nincs ilyen honap");
	if (d < 1 || d > 31) error("Nincs ilyen nap");

	dd.y = y;
	dd.m = m;
	dd.d = d;
}

void add_day(Date& dd, int n) {
	dd.d += n;
}
void f(){
    Date today;
    init_day(today, 2014, 10, 17);
    add_day(today, 0);

		cout << today.d << '/' << today.m << '/' << today.y << '\n';
}
int main()
{
    f();
	keep_window_open();
    return 0;
}
