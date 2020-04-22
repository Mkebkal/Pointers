#include<iostream>
using namespace std;


int  sum(int n, int value...)
{
	int sum = 0;
	int* p_value = &value;
	for (int i = 0; i < n; i++)
	{
		sum += *p_value;
		p_value++;
	}
	return sum;
}

template<typename T>
T production(T value...)
{
	T production = 1;
	T* p_value = &value;
	while (*p_value != T())
	{
		production *= *p_value++;
	}
	return production;
}


void main()
{
	cout << sum(4, 5, 8, 13, 21) << endl;
	cout << production(3.14, 5.3, 8.4, 13., 21., double());
}
