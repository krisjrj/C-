#include <iostream>
using namespace std;
#include "Date.h"

int main()
{
	/*Date d1(2021, 3, 1);
	d1.Print();*/

	/*d1 += 50;
	d1.Print();

	Date ret = d1 + 50;
	ret.Print();

	d1 -= 50;
	d1.Print();

	ret = d1 - 50;
	ret.Print();*/

	/*d1.operator++();
	d1.Print();
	Date ret = d1++;
	ret.Print();

	d1.operator--();
	d1.Print();
	Date ret = d1--;
	ret.Print();*/
	Date d1(2021, 3, 1);
	d1.Print();
	Date d2(2021, 3, 2);
	bool x = d1 < d2;
	bool y = d1 >= d2;
	bool z = d1 <= d2;

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
}
