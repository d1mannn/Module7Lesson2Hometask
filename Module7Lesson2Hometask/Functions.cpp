#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "Header.h"
using namespace std;

int HappyNumb()
{	
	int numb;
	short int a, b, c, d, e, f;
	do
	{
		cout << "Введите 6-и значное число - ";
		cin >> numb;
	} while (numb < 100000 || numb > 899999);
	a = numb / 100000;
	f = numb % 10;
	e = (numb % 100) / 10;
	d = (numb % 1000) / 100;
	b = (numb / 10000) % 10;
	c = (numb % 10000) / 1000;
	if (a + b + c == d + e + f)
		return 1;
	else 
		return 0;
}

void NumbChange(int *numb)
{
	short int a, b, c, d, temp;
	a = *numb / 1000;
	d = *numb % 10;
	c = (*numb % 100) / 10;
	b = (*numb / 100) % 10;
	temp = a;
	a = b;
	b = temp;
	temp = c;
	c = d;
	d = temp;
	cout << a << b << c << d << endl;
}

void ManagersSalary(int *SalesLevel1, int *SalesLevel2, int *SalesLevel3)
{
	int mng1 = 200, mng2 = 200, mng3 = 200;
	// mng 1
	if (*SalesLevel1 < 500)
		mng1 += 200 * 0.3;
	if (*SalesLevel1 >= 500 && *SalesLevel1 < 1000)
		mng1 += 200 * 0.5;
	if (*SalesLevel1 >= 1000)
		mng1 += 200 * 0.8;

	//mng 2
	if (*SalesLevel2 < 500)
		mng2 += 200 * 0.3;
	if (*SalesLevel2 >= 500 && *SalesLevel2 < 1000)
		mng2 += 200 * 0.5;
	if (*SalesLevel2 >= 1000)
		mng2 += 200 * 0.8;

	//mng 3
	if (*SalesLevel3 < 500)
		mng3 += 200 * 0.3;
	if (*SalesLevel3 >= 500 && *SalesLevel3 < 1000)
		mng3 += 200 * 0.5;
	if (*SalesLevel3 >= 1000)
		mng3 += 200 * 0.8;

	cout << "У мнж 1 доход в месяц составил " << mng1 << endl;
	cout << "У мнж 2 доход в месяц составил " << mng2 << endl;
	cout << "У мнж 3 доход в месяц составил " << mng3 << endl;

	if (mng1 > mng2 && mng1 > mng3)
		cout << "Мнж 1 лучший. Добавим ему премию 200 у.е.\nИтого за месяц он получит - " << mng1 + 200 << endl;
	if (mng2 > mng1 && mng2 > mng3)
		cout << "Мнж 2 лучший. Добавим ему премию 200 у.е.\nИтого за месяц он получит - " << mng2 + 200 << endl;
	if (mng3 > mng1 && mng3 > mng2)
		cout << "Мнж 3 лучший. Добавим ему премию 200 у.е.\nИтого за месяц он получит - " << mng3 + 200 << endl;
	else
		cout << "ВСЕ МЕНЕДЖЕРЫ ОТЛИЧНО ПОРАБОТАЛИ!!! " << endl;
}

void VasyaCoder(int *income, int *late)
{	
	int bill = (*late / 3) * 20;
	int str = ((*income + bill) * 50) / 100;
	cout << "Чтобы заработать " << *income << "$, и оплатить штраф равный " << bill << ", необходимо написать " << str << " строк кода." << endl;
}

void VasyaCoder2(int *income, int *str)
{
	int incomeNow = (50 * *str) / 100, miss = 0, count = 0;
	if (incomeNow > *income)
	{
		int differents = incomeNow - *income;
		while (differents > miss)
		{
			miss += 20;
			count++;
		}
		cout << "Васе можно опоздать - " << count << " р." << endl;
	}
	else
		cout << "Васе нельзя опаздывать!!! "<< endl;
}

void VasyaCoder3(int *late, int *str)
{
	int Possiblesalary = (*str / 100) * 50;
	int bill = (*late / 3) * 20;
	if (Possiblesalary - bill > 0)
		cout << "Вася получит " << Possiblesalary - bill << endl;
	else
		cout << "Вася не получит денег" << endl;
}

void CountOfNumbs()
{	
	int a, b, c, count = 0, count1 = 0;
	for (int i = 100; i < 1000; i++)
	{
		a = i / 100;
		c = i % 10;
		b = (i % 100) / 10;
		if (a == b || a == c || b == c)
			count++;
		if ((a != b && a != c && c != b))
			count1++;
	}
	cout << "Кол-во чисел в диапазоне от 100 до 999 у которых есть две одинаковые цифры - " << count << endl;
	cout << "Кол-во чисел в диапазоне от 100 до 999 у которых все цифры разные - " << count1 << endl;
}

void NumbDelete(int *numb)
{	
	int a, b, c, d;
	a = *numb / 1000;
	d = *numb % 10;
	c = (*numb % 100) / 10;
	b = (*numb / 100) % 10;
	int m[4] = { a, b, c, d };
	for (int i = 0; i < 4; i++)
	{
		if (m[i] == 3 || m[i] == 6)
			m[i] = 0;
		if (m[i] != 0)
			cout << m[i];
	}
	cout << endl;
}

void BigArr(int *numb)
{
	for (int i = 0; i < 999999; i++)
	{
		if ((i % *numb) == 0)
			cout << i << endl;
	}
}

void CreativeArr(int *numb)
{
	char arr[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = '*';
		}
	}
	switch (*numb)
	{
		case 1:
		{
			for (int i = 0; i < 5; i++)
			{
				for (int j = i; j < 5; j++)
				{
					cout << arr[i][j];
				}
				cout << endl;
			}
		} break;
		// нужно доработать
	
	}
}