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

	/*
	sizeof关键字可以求出数据类型占用内存大小
	sizeof(数据类型/变量)
	*/
	cout << "short占用内存空间为：" << sizeof(short) << "字节" << endl;
	cout << "变量num4占用内存空间为：" << sizeof(num4) << "字节" << endl;

	/*实型（浮点型）*/
	//1.单精度 float
	float f1 = 3.1415926f;

	//2.双精度 double
	double d1 = 3.1415926;

	//默认情况下 输出一个小数最多显示6位有效数字
	cout << "f1=" << f1 << endl;
	cout << "d1=" << d1 << endl;

	//统计float和double占用内存空间
	cout << "float占用内存空间为：" << sizeof(float) << "字节" << endl;
	cout << "double占用内存空间为：" << sizeof(double) << "字节" << endl;

	//科学计数法
	float f2 = 3e2f;
	cout << "f2=" << f2 << endl;
	double d2 = 3e-2;
	cout << "d2=" << d2 << endl;

	/*字符型*/
	char ch = 'a';
	cout << ch << endl;
	cout << "char占用内存空间为：" << sizeof(char) << "字节" << endl;

	//字符型变量对应的ASCII编码
	cout << (int)ch << endl;
	
	/*转义字符*/
	//换行符\n
	cout << "hello world\n";

	//反斜杆
	cout << "\\"<<endl;

	//水平制表符\t
	cout << "你好呀\tc++" << endl;
	cout << "你好\tc++" << endl;
	cout << "hello\tc++" << endl;

	cout << "hello world" << endl; //在控制台中输出hello world
	system("pause");
	return 0;
}