// Задача 1 Препроцессорные директивы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#define MODE 1

int add(int a, int b) { return a + b; }

int main()
{
	setlocale(LC_ALL, "ru");

#ifndef MODE
#error MODE is not defined
#endif

#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	int a, b;
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: ";
	std::cin >> a;
	std::cout << "Введите число 2: ";
	std::cin >> b;
	std::cout << "Результат сложения: " << add(a, b) << std::endl;
#else
#error MODE value error 
#endif
}

