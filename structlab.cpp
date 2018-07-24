#include <bits/stdc++.h>
using namespace std;
struct Date {
	int day,month,year;
    Date() : day(), month(), year() {}
    Date( int d, int m, int y ) : day( d ), month( m ), year( y ) {}
};
int main()
{
	Date d[20];
	d[1]=Date(1,2,3);
	cout << d[1].day << "\n" << d[1].month << "\n" << d[1].year ;
}
