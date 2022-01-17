
#include <iostream>

void EvenNumber(int num)
{
	int Arr[10] = { 0, };
	int Index = 0;
	for (int i = 1; i <= num; i++)
	{
		if (i % 2 == 0)
		{
			Arr[Index] = i;
			Index++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << Arr[i] << " " ;
	}
	
}

void OddNumber(int num)
{
	int Arr[10] = { 0, };
	int Index = 0;
	for (int i = 1; i <= num; i++)
	{
		if (i % 2 == 1)
		{
			Arr[Index] = i;
			Index++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << Arr[i] << " ";
	}
}

int main()
{
	OddNumber(20);
	std::cout << std::endl;
	EvenNumber(20);
}

