#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
/*	Объявить массив из n=20 целых чисел, проинициализировать нулями. Функция
	process_array() должна заполнить массив случайными числами от 1 до 10, вычислить
	и вернуть наиболее часто встречающееся значение в массиве (если таких несколько,
	вернуть наименьшее) и сформировать выходной массив из всех элементов, которые
	встречаются как минимум 2 раза во входном массиве. Вывести на экран массивы. */

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d%c", arr[i], ' ');
		}
		else
		{
			continue;
		}
	}
	printf("\n");
}

int processArray(int arr[], int* freqelem, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1; //генерируем случайное число, остаток от деления на n будет число <n, включая 0 
	}

	printArray(arr, size);

	for (int i = 0; i < size - 1; i++) //сортировка выбором
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		int buf = arr[min];
		arr[min] = arr[i];
		arr[i] = buf;
	}

	int mod = 0;

	for (int i = 0; i < size; i++) //эл-ты, встречающиеся более 2 раз
	{
		int count = 0;

		for (int j = 0; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (mod < count)
		{
			mod = count;
		}
		if (i != 0 && i != size - 1) //проверка на выход за рамки массива
		{
			if (arr[i - 1] != arr[i] && arr[i] == arr[i + 1])
			{
				freqelem[i] = arr[i];
			}
		}
	}

	for (int i = 0; i < size; i++) //мода ряда
	{
		int count = 0;
		for (int j = 0; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;

				if (count == mod)
				{
					return arr[i];
				}
			}
		}
	}
}

int main()
{
	printf("Task_1\n");
	int num[20] = {};
	int freqelem[20] = {};
	const int size = sizeof(num) / sizeof(num[0]);
	int x = processArray(num, freqelem, size);
	printf("Second array: ");
	printArray(freqelem, size);
	printf("MostFrequentElement: %d\n", x);
}
