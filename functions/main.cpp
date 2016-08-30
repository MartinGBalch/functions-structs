#include<iostream>
using namespace std;
int MulThenSub(int a_param, int a_param2)
{
	if (a_param % 2 == 0)
	{
		return a_param * a_param2 - a_param2;
	}
	else
	{
		return a_param * a_param2 - a_param;
	}
}

void printNum(int n)
{
	printf("%d ", n);
}

int main()
{
	int result = 3 * MulThenSub(3, 12) + 5;
	printNum(result);
	system("pause");
}