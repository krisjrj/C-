#include<iostream>
using namespace std;

////函数重载
//int Add(int left, int right)
//{
//	return left + right;
//}
// 
//double Add(double left, double right)
//{
//	return left + right;
//}
//
//long Add(long left, long right)
//{
//	return left + right;
//}

//int main()
//{
//	Add(10, 20);
//	Add(10.0, 20.0);
//	Add(10L, 20L);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int& b = a;//这里的&是引用，不是取地址
//	a = 20;
//	b = 30;
//	return 0;
//}

//int main()
//{
//	//指针和引用在初始化赋值时，权限可以缩小，不能放大
//	const int a = 10;
//	//int& b = a;
//	const int& b = a;
//
//	int c = 10;
//	const int& d = c;
//	const int& r = 10;
//	
//	//整形和浮点数之间互相隐式类型转换
//	double dd = 2.22;
//	int i = dd;
//	
//	const int& ri = dd;
//	return 0;
//
//}
//void Swap(int& x, int& y)//引用
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap(int* px, int* py)//指针
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0, b = 1;
//	Swap(&a, &b);
//	Swap(a, b);
//	return 0;
//}
//int Count()
//{
//	static int n = 0;
//	n++;
//	return 0;
//}
//
//int main()
//{
//	int ret = Count();
//	printf("%d\n", ret);
//	return 0;
//}

int& Add(int a, int b)
{
	int c = a + b;
	return c;
}

int main()
{
	int& ret = Add(1, 2);
	Add(3, 4);
	cout << "Add(1, 2) = " << ret << endl;
	return 0;
}