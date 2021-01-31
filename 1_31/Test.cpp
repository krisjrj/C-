//#include<iostream>
//using namespace std;
//namespace N {
//    int a = 10;
//    int b = 20;
//    int Add(int left, int right)
//    {
//        return left + right;
//    }
//    int Sub(int left, int right)
//    {
//        return left - right;
//    }
//}
//int main()
//{
//    printf("%d\n", a); // 该语句编译出错，无法识别a
//    return 0;
//}




//1
//#include<iostream>	  //输入输出流
////using namespace std;//c++库所有东西都是放在std命名空间中
//
//int main()
//{
//	//自动识别类型
//	//std::cout << "hello world\n"<<std::endl;
//	int i = 1;
//	double d = 1.11;
//	std::cout << "i = " << i << std::endl;
//	std::cout << "d = " << d << std::endl;
//	return 0;
//}

//2
//#include<iostream>
////在日常练习中，不在乎和库命名冲突
//using namespace std;
//int cout = 10;//跟库冲突
//int main()
//{
//	//自动识别类型
//	std::cout << "hello world\n"<<std::endl;
//	int i = 1;
//	double d = 1.11;
//	std::cout << i << " " << d << std::endl;
//	return 0;
//}

//3
//#include<iostream>
////常用的库里面一些对象或者类型可以展出来
////工程项目中通常比较推荐
//using std::cout;
//using std::endl;
//
//int main()
//{
//	//自动识别类型
//	//cout << "hello world\n"<<endl;
//	int i = 1;
//	double d = 1.11;
//	std::cin >> i >> d;
//	std::cout << "i = " << i << std::endl;
//	std::cout << "d = " << d << std::endl;
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
////缺省参数  -》备胎
//
//void Func(int a = 10,int b = 10,int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//
////半缺省
//void Func2(int a, int b, int c=20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{//传参必须从右往左依次传参，不能间隔
//	Func();
//	Func(1);
//	Func(1,2);
//	Func(1,2,3);
//	//Func2(1);
//	Func(1, 2);
//	Func2(1, 2, 3);
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	return 0;
//}