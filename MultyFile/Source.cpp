#include <iostream>
#include "Functions.h"
#include "Structures.h"
#include "Data.h"

const int WIDTH = 24;
const int HEIGTH = 50;



int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;




	//Библиотека с функциями
	/*
	
	std::cout << "Введите два числа ->";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " <<
		sum(n, m) << std::endl;

	hi();
	const int size = 5;
	int arr[size]{ 1,2,3,4,5 };
	print_arr(arr,size);
	//Области применения многофайловых проектов
	//1. Разбивка кода на разные файлы для удобства работы с ним
	//2.Создание собственных библиотек для использования их в разных проектах
	//3. Ускорение сборки проекта
	*/
	//Библиотека со структурой и функциями для работы с ней
	/*
	person p1{
		"Tom Smith",
		26,
		"programmer",
		80000
	};
	print_person(p1);

	person p2 = input_person();
	print_person(p2);
	*/

	_A = 15;
	std::cout << "A = " << _A << std::endl;
	std::cout << "PI = " << _PI << std::endl;
	std::cout << "E = " << _E << std::endl;
	print_arr(_ARR, _ARR_SIZE);
	show_pi();
	return 0;
}