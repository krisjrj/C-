#include"Date.h"

using namespace std;

class Date
{
public:
	void SetDate(int year,int month,int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;

};
int main()
{
	Date d1, d2;
	d1.SetDate(2000, 11, 3);
	d2.SetDate(1995, 13, 5);
	d1.Print();
	d2.Print();
	return 0;
}