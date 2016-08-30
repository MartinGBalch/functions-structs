#include<iostream>
using namespace std;

float foo, bar;

float LowerofTwo(float varA , float varB)
{
	if (varA < varB)
	{
		return varA;
		//printf(" %f", varA);
	}
	else if(varB < varA)
	{
		return varB;
		//printf(" %f", varB);
	}
	else
	{
		return varB;
		//printf(" They be equal, son");
	}
}

int main()
{
	
	printf("Hey put in two numbers for me. I'll give you the lower number\n");
	scanf_s("%f %f", &foo, &bar);

	printf("Checking...\n");
	float lower = LowerofTwo(foo , bar);

	printf("The lower value was %f", lower);
	system("Pause");
}