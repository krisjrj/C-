#include<iostream>
using namespace std;

//КЏЪ§жиди
int Add(int left, int right)
{
	return left + right;
}
 
double Add(double left, double right)
{
	return left + right;
}

long Add(long left, long right)
{
	return left + right;
}

//int main()
//{
//	Add(10, 20);
//	Add(10.0, 20.0);
//	Add(10L, 20L);
//	return 0;
//}
int main()
{
	int a = 10;
	int& b = a;
	a = 20;
	b = 30;
	return 0;
}