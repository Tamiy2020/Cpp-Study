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

	/*
	sizeof�ؼ��ֿ��������������ռ���ڴ��С
	sizeof(��������/����)
	*/
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(short) << "�ֽ�" << endl;
	cout << "����num4ռ���ڴ�ռ�Ϊ��" << sizeof(num4) << "�ֽ�" << endl;

	/*ʵ�ͣ������ͣ�*/
	//1.������ float
	float f1 = 3.1415926f;

	//2.˫���� double
	double d1 = 3.1415926;

	//Ĭ������� ���һ��С�������ʾ6λ��Ч����
	cout << "f1=" << f1 << endl;
	cout << "d1=" << d1 << endl;

	//ͳ��float��doubleռ���ڴ�ռ�
	cout << "floatռ���ڴ�ռ�Ϊ��" << sizeof(float) << "�ֽ�" << endl;
	cout << "doubleռ���ڴ�ռ�Ϊ��" << sizeof(double) << "�ֽ�" << endl;

	//��ѧ������
	float f2 = 3e2f;
	cout << "f2=" << f2 << endl;
	double d2 = 3e-2;
	cout << "d2=" << d2 << endl;

	/*�ַ���*/
	char ch = 'a';
	cout << ch << endl;
	cout << "charռ���ڴ�ռ�Ϊ��" << sizeof(char) << "�ֽ�" << endl;

	//�ַ��ͱ�����Ӧ��ASCII����
	cout << (int)ch << endl;
	
	/*ת���ַ�*/
	//���з�\n
	cout << "hello world\n";

	//��б��
	cout << "\\"<<endl;

	//ˮƽ�Ʊ��\t
	cout << "���ѽ\tc++" << endl;
	cout << "���\tc++" << endl;
	cout << "hello\tc++" << endl;

	cout << "hello world" << endl; //�ڿ���̨�����hello world
	system("pause");
	return 0;
}