﻿#include "Functions.h"
#include <iostream>


extern const double _PI = 3.14;
extern const int HEIGHT = 50;
extern const int WIDTH = 24;

double sum(double num1,double num2) {
	return num1 + num2;
}

void hi()
{
	std::cout << "Hello world!\n";
}

void show_pi(){
	std::cout << "Число Pi = " << _PI << std::endl;
}
