﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


void mai1n(void)
{
	setlocale(LC_ALL, "RUS");

	// задание 1
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;

	printf("Значения переменных: %c %d %f %lg\n", c, i, f, d);

	puts("Введите новые значения переменных (char, int, float, double)\n");
	scanf("%c %d %f %lg", &c, &i, &f, &d);
	printf("Значения переменных: %c %d %f %lg\n", c, i, f, d);

	// задача 1а
	printf("Целая часть: %d, дробная часть: %f\n", (int)f, f - (int)f);
	// задача 1б
	printf("Шестнадцатеричный код символа: %x, десятичный код символа: %d\n", (int)c, (int)c);
	// задача 1в
	printf("1/i = %g\n", 1. / i);


	// задание 2
	int a = 11, b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;

	printf("x = %d, y = %f, z = %lf\n", x, y, z);
	// x выводится нормально, так как все переменные были целочисленные
	// y и z выводятся с дробной частью (нулями), так как целочислнный результат деления был приведён к вещественному типу

	printf("Используем float: %f, используем double: %lf\n", (float)a / b, (double)a / b);
	// все значения выводятся верно, так как к вещ. типу была приведена одна переменная, и вторая - автоматически
	printf("Используем float и скобки: %f, используем double и скобки: %lf\n", (float)(a / b), (double)(a / b));
	// значения выводятся с нулевой дробной частью, так как к вещ. типу был приведён целочисленный результат деления


	// задание 3
	int N, n1, n2, n3, sum;
	puts("Введите целое трёхзначное число: ");
	scanf("%d", &N);
	n1 = N / 100;
	n2 = (N / 10) - (n1 * 10);
	n3 = N % 10;
	sum = n1 + n2 + n3;
	printf("Последняя цифра - %d, первая - %d, сумма цифр - %d, число 'наоборот' - %d%d%d", n3, n1, sum, n3, n2, n1);

}