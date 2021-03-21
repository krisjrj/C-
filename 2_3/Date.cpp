#include "Date.h"
int Date::GetMonthDay(int year,int month)
{
	static int daysArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int days = daysArray[month];
	if (month == 2 &&
		((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		days = 29;
	}

	return days;
}

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
	if (!(year >= 0 &&
		month > 0 && month < 13 &&
		day>0 && day < GetMonthDay(year, month)))
	{
		cout << "日期非法" << endl;
	}
}

void Date::Print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}

// d1 += 10
Date& Date::operator+=(int day)
{
	/*if (day < 0)
	{
		return *this -= -day;
	}*/
	_day += day;
	while (_day > GetMonthDay(_year, _month)) 
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}

	return *this;
}
// d1 + 10
Date Date::operator+(int day)
{
	Date ret(*this);
	ret += day;
	return ret;
}

Date& Date::operator-=(int day)
{
	/*if (day < 0)
	{
		return *this += -day;
	}*/
	_day -= day;//_day=_day-day;  20-80
	while (_day <= 0) 
	{
		if (_month == 1)
		{
			_year--;
			_month = 12;
		}
		_month--;
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}

Date Date::operator-(int day)
{
	Date ret(*this);
	ret -= day;
	return ret;
}

Date& Date:: operator++()
{
	*this += 1;
	return *this;
}

Date Date:: operator++(int)
{
	Date ret(*this);
	ret += 1;
	return ret;
}

Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

Date Date::operator--(int)
{
	Date ret(*this);
	ret -= 1;
	return ret;
}

bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}