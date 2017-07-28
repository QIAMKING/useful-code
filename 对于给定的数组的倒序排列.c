//对于给定数组的顺序排列
#include<stdio.h>
void order(double array[], int n);
int main(void)
{
	double number1[] = { 3.1,4.5,6.8,9.89,0.67,67.8 };
	int size, index;

	size = sizeof number1 / sizeof number1[0];
	order(number1, size);
	for (index = 0; index <= size - 1; index++)
		printf("%le\n ", number1[index]);

	getchar();
	return  0;
}

void order(double array[], int n)
{
	int a, b, c;
	double i;

	for (c = n - 1; c >= 0; c--)
	{
		for (a = 0; a <= c; a++)
		{
			for (b = 0; b <= c; b++)
			{
				if (array[a] - array[b] >= 0)
					continue;
				else
					break;
			}
			if (b == c + 1)
				break;
			else
				continue;
		}
		i = array[c];
		array[c] = array[a];
		array[a] = i;
	}

}
