#include<iostream>
using namespace std;


#define Pointer_Basics

void main()
{
	setlocale(LC_ALL, "");

#ifdef Pointer_Basics
	int a = 2; //���������� ���������� 
	int* pa = &a; // ��������� ��������� , � �������������� ��� ������� ���������� � 
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;


	int* pb;
	int b = 3;
	pb = &b;
	cout << *pb << endl;

#endif Pointer_Basics




	const int  n = 5;
	int  arr[] = { 3, 5, 8 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *arr + i << '\t';
	}
	cout << endl;




	// int - int 
		//int* - ��������� �� int 
		//char* - ��������� �� char
		/*
		//& - �������� ������ ������ (Adress of operator)
		//* - �������� ������������� (Derefence operator)
		//*/

}