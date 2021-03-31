#include<iostream>
using namespace std;
//class Date
//{
//public:
//	Date(int year, int month, int day)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//private:
//	int _year;//声明
//	int _month;
//	int _day;
//};


//int main()
//{
//	Date d1(1990, 1, 1);
//	return 0;
//}

//class A {
//public:
//    A(int a)
//        :_a1(a)
//        , _a2(_a1)
//    {}
//
//    void Print() {
//        cout << _a1 << " " << _a2 << endl;
//    }
//private:
//    int _a2;
//    int _a1;
//};
//int main()
//{
//    A aa(1);
//    aa.Print();
//}


//class Date
//{
//
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
//	//如果是成员函数,（隐藏的this指针：const Date& d无法调用）
//	void operator<<(ostream& out)
//	{
//		//out << d._year << "-" << d._month << "-" << d._day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//
//
//int main()
//{
//	Date d1(2021, 3, 9);
//	//cout << d1;
//	d1<< cout;
//	d1.operator<<(cout);
//	return 0;
//}
class Date;//前置声明
class Time
{
	//友元->我想访问你
	friend class Date;
	friend ostream& operator<<(ostream& out, const Date& d);
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		:_hour(hour)
		, _minute(minute)
		,_second(second)
	{}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
	//友元函数
	friend istream& operator >> (istream& in, Date& d);
	friend ostream& operator<<(ostream& out, const Date& d);
public:
	Date(int year = 0, int month = 1, int day = 1, int hour = 0, int minute = 0, int second = 0)
		:_year(year)
		, _month(month)
		, _day(day)
		,_t(hour,minute,second)
	{
		cout << _t._hour * 60 * 60 + _t._minute * 60 + _t._second << endl;
	}


private:
	int _year;
	int _month;
	int _day;

	Time _t;//访问Time类
};

//void operator<<(Date* this, ostream& out)
ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "年" << d._month << "月" << d._day << "日";
	out << d._t._hour << "时" << d._t._minute << "分" << d._t._second << "秒" << endl;
	return out;
}

istream& operator >> (istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day ;
	return in;
}

int main()
{
	Date d1(2021, 3, 9, 19, 35, 20);
	Date d2(2021, 3, 10, 20, 50, 52);
	cout << d1 << d2;
	//cin >> d1 >> d2;
	//cout << d1 << d2;
	//d1 << cout;


	return 0;
}