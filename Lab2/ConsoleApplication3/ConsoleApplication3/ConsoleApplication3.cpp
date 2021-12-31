#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include "Phone.h"

int main()
{
	std::cout << "Task 3" << "\n";
	/*Написать собственный класс, в соответствии с вариантом.Продемонстрировать в коде инкапсуляцию данных, применение конструкторов без параметров и с параметрами
	для инициализации данных.Класс должен содержать метод serialize() для сохранения данных класса в файл и метод deserialize() для чтения данных класса
	из файла по умолчанию в текущей директории, а также перегруженные методы serialize(const std::string & filename) и deserialize(const std::string & filename)
	для работы с файлом с указанным в параметре именем.
	Класс ТЕЛЕФОН.
	Данные: модель, номер телефона, последний набранный номер, остаток на счету.
	Создать два телефона в куче. Установить данные первого телефона с помощью сеттеров, второго – в конструкторе с параметрами. В главной функции проимитировать десять
	звонков – позвонить по нескольку раз на 3 номера, в том числе на номер другого телефона в программе. За каждую минуту разговора снимается 0,5 руб. Вывести всю
	информацию о телефонах после проведенных звонков.
	*/
	Phone* phone1 = new Phone("Xiaomi Poco X3 Pro", "+38(071)58-55-69", "none", 200);
	Phone* phone2 = new Phone();
	phone2->setModel("Xiaomi Redmi 4A");
	phone2->setNumber("+7(989)814-65-00");
	phone2->setLastNuber("none");
	phone2->setBalance(50);

	phone1->call(phone2->getNumber(), 15);
	phone2->call(phone1->getNumber(), 10);
	phone1->call(phone2->getNumber(), 60);
	phone2->call(phone1->getNumber(), 30);
	phone1->getInfo();
	phone2->getInfo();

	phone1->call("+38(071)457-64-52", 15);
	phone2->call("+38(071)450-78-62", 10);
	phone1->call("+38(071)457-64-52", 44);
	phone2->call("+1(67)227-73-69", 32);

	phone1->call(phone2->getNumber(), 15);
	phone2->call(phone1->getNumber(), 10);

	phone1->getInfo();
	phone2->getInfo();
}
