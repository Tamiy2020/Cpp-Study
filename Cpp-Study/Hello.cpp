#include <iostream>
using namespace std;

#define Day 7  //�곣��

/*
    main��һ����������
	ÿ�����򶼱�������ֻ��һ���������
*/
int main()
{
	int a = 10;//������������ �������� ������=��ʼֵ
	cout << "a=" << a << endl;

	/*
	   �����Ķ��巽ʽ
	   1.#define �곣����#define ������ ����ֵ
	   2.const���εı�����const �������� ������=����ֵ
	*/
	cout << "һ���ܹ��У�" << Day << "��" << endl;

	const int month = 12;
	cout << "һ���ܹ��У�" << month << "��" << endl;

	/*����*/
	//1.������(-32768~32767)
	short num1 = 10;

	//2.����(-2^31~2^31-1)
	int num2 = 10;

	//3.������(-2^31~2^31-1)
	long num3 = 10;

	//4.��������(-2^63~2^63-1)
	long long num4 = 10;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	cout << "hello world" << endl; //�ڿ���̨�����hello world
	system("pause");
	return 0;
}