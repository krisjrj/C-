#pragma once
#include <iostream>
using namespace std;

class Date 
{
public:
	int GetMonthDay(int year, int month);
	void Print();
	Date(int year = 1900, int month = 1, int day = 1);
	// d1 += 10
	Date& operator+=(int day);
	// d1 + 10
	Date operator+(int day);


	// d1 -= 10
	Date& operator-=(int day);
	// d1 - 10
	Date operator-(int day);

	Date& operator++();

	// Ϊ�˸�ǰ��++�����Ȳ����ѣ����������++��
	// ����һ������������βΣ����������ʹ��,������Ϊ�˸�ǰ��++���ɺ����������ֿ���
	// d1++
	// d1.operator++(&d1, 0);
	Date operator++(int);

	Date& operator--();
	Date operator--(int);

	// ==���������
	bool operator==(const Date& d);

	// !=���������
	bool operator != (const Date& d);

	// >���������
	bool operator>(const Date& d);

	// <���������
	bool operator < (const Date& d);

	// >=���������
	bool operator >= (const Date& d);

	// <=���������
	bool operator <= (const Date& d);


private:
	int _year;
	int _month;
	int _day;

};