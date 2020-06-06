#include <iostream>
using namespace std;

#define Day 7  //宏常量

/*
    main是一个程序的入口
	每个程序都必须有且只有一个这个函数
*/
int main()
{
	int a = 10;//变量的声明： 数据类型 变量名=初始值
	cout << "a=" << a << endl;

	/*
	   常量的定义方式
	   1.#define 宏常量：#define 常量名 常量值
	   2.const修饰的变量：const 数据类型 常量名=常量值
	*/
	cout << "一周总共有：" << Day << "天" << endl;

	const int month = 12;
	cout << "一年总共有：" << month << "月" << endl;

	/*整型*/
	//1.短整型(-32768~32767)
	short num1 = 10;

	//2.整型(-2^31~2^31-1)
	int num2 = 10;

	//3.长整型(-2^31~2^31-1)
	long num3 = 10;

	//4.长长整型(-2^63~2^63-1)
	long long num4 = 10;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	cout << "hello world" << endl; //在控制台中输出hello world
	system("pause");
	return 0;
}