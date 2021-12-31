#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include "Vector.h"
#include "Matrix.h"

int main()
{
	std::cout << "Task 1" << "\n";
	/*Написать классы Vector и Matrix для хранения и обработки одномерных и двумерных массивов, соответственно. Реализовать задание 2 лабораторной работы №1:
	Преобразование: 2D → 1D. Двумерный массив 5х3 вещественных чисел необходимо выложить в один ряд по элементам слева направо и снизу вверх.
	Инициализация: заполнить массив числами x[i][j] = sin(i–j) + cos(i+j).
	Вывод на экран: на каждый элемент массива отвести 14 позиций.
	В коде отразить следующее:
	1) Выделение и освобождение динамической памяти производить в конструкторах и деструкторах классов, соответственно.
	2) В классе Vector перегрузить оператор индексации []. В классе Matrix добавить методы T at(int i, int j) const и setAt(int i, int j, T val), которые
	позволяют получить и установить значение элемента массива с индексом [i][j], T – это тип элементов массива по варианту (int или double).
	3) Перегрузить операторы инкремента и декремента (как префиксного, так ипостфиксного). Смысл инкремента / декремента всего массива заключается в
	инкременте / декременте каждого элемента массива.*/

	Matrix array2D(5, 3);
	Vector array1D(15);

	for (int i = 0; i < array2D.getRows(); i++)
	{
		for (int j = 0; j < array2D.getCols(); j++)
		{
			array2D.setAt(i, j, (sin(i - j) + cos(i + j)));
		}
	}
	array2D.printFormated();
	int k = 0;
	for (int i = array2D.getRows() - 1; i >= 0; i--)
	{
		for (int j = 0; j < array2D.getCols(); j++)
		{
			array1D[k] = array2D.at(i, j);
			k++;
		}
	}
	array1D.printFormated();
	array2D--;
	--array2D;
	array2D.printFormated();
	array2D++;
	++array2D;
	array2D.printFormated();
	array1D.printFormated();
	array1D--;
	--array1D;
	array1D.printFormated();
	array1D++;
	++array1D;
	array1D.printFormated();
}