#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
	/*Преобразование: 2D → 1D.Двумерный массив 5х3 вещественных чисел необходимо
	выложить в один ряд по элементам слева направо и снизу вверх.
	Инициализация : заполнить массив числами x[i][j] = sin(i–j) + cos(i + j).
	Вывод на экран : на каждый элемент массива отвести 14 позиций.*/

void initializeArray(double** arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			*(*(arr + i) + j) = sin(i - j) + cos(i + j);
		}
	}
}
double* arrayTwoToOne(double** arr, int n, int m)
{
	int size = n * m;
	double* arr1D = new double[size];
	int count = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < m; j++)
		{
			*(arr1D + count) = *(*(arr + i) + j);
			count++;
		}
	}
	return arr1D;
}

void deleteArray(double** arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

void printArray2D(double** arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << std::setw(14) << *(*(arr + i) + j);
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}

void printArray1D(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << " " << std::setw(14);
	}
	std::cout << "\n";
}

int main()
{
	std::cout << "Task_2" << std::endl;
	const int n = 5;
	const int m = 3;
	const int length = 15;
	double** array = new double* [5]; //динамический 2д массив
	for (int i = 0; i < 5; i++)
	{
		*(array + i) = new double[3];
	}
	initializeArray(array, n, m);
	printArray2D(array, n, m);
	double* exitarray = arrayTwoToOne(array, n, m);
	deleteArray(array, n);
	printArray1D(exitarray, length);
	delete[] exitarray;
}