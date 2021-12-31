#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include "Fraction.h"

int main()
{
	std::cout << "Task 2" << "\n";
	/*Написать класс Fraction для представления обыкновенных дробей(как отношения двух целых чисел x / y).
	Перегрузить операторы + , -, *, / для дробей.Реализовать метод void reduce() для сокращения дроби, а также статические методы :
	1) int gcd(int n, int m) - функция для нахождения наибольшего общего делителя чисел n и m;
	2) void printAsFraction(double decimal_fraction)
	3) void printAsFraction(char* decimal_fraction)
	перегруженные методы вывода десятичной дроби в виде обыкновенной
	(например, при значении decimal_fraction = 0.43 на экране должно вывестись 43 / 100, при 0.25 – 1 / 4 и т.д.).
	Также реализовать в виде статического члена класса счетчик всех созданных на данный момент в программе экземпляров дробей.*/

	Fraction a(5, 1);
	Fraction b(7, 4);
	Fraction c = a + b;
	Fraction d = a - b;
	Fraction e = a * b;
	Fraction f = a / b;
	a.printFraction();
	b.printFraction();
	c.printFraction();
	d.printFraction();
	e.printFraction();
	f.printFraction();
	std::cout << "\n";
	char test1[] = "0.25";
	double test2 = 0.25;
	Fraction::printAsFraction(test1);
	Fraction::printAsFraction(test2);
	std::cout << "Total fractions: " << a.getTotalFractions() << "\n";
	system("pause");
}