#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "Header.h"
using namespace std;

void main()
{	
	setlocale(LC_ALL, "Rus");
	short int task;
	do
	{
		cout << "������� ����� ������� - ";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				/*1.	������������ ������ � ���������� ����� ������������ �����.
				�������� ���������, ������� ����������, �������� �� ��������� ����� � ����������
				(���������� ��������� ������������ �����, � �������� ����� ������ 3 ���� ����� ����� ������ ���� ����).
				���� ������������ ���� �� ������������ ����� � ��������� �� ������.*/
				if (HappyNumb() == 1)
					cout << "����� ����������" << endl;
				else
					cout << "����� �� ����������" << endl;
			} break;

			case 2:
			{
				/*2.	������������ ������ �������������� �����.���������� �������� � ���� ����� 1 � 2 �����,
					� ����� 3 � 4 �����.���� ������������ ������ �� �������������� ����� � ������� ��������� �� ������.*/
				int numb;
				do
				{
					cout << "������� 4� ������� ����� - ";
					cin >> numb;
				} while (numb < 1000 || numb > 8999);
				NumbChange(&numb);
			} break;

			case 3:
			{
				/*3.	�������� ��������� ���������� 200$ + ������� �� ������.
					������� �� 500$ - 3 % , �� 500 �� 1000 � 5 % , ����� 1000 � 8 % .
					������������ ������ � ���������� ������� ������ ��� ���� ����������.
					���������� �� ��������, ���������� ������� ���������,
					��������� ��� ������ 200$, ������� ����� �� �����.*/
				int SalesLevel1, SalesLevel2, SalesLevel3;
				cout << "������� ��������������� ������ ������ ��� 1-��, 2-�� � 3-�� ��������� - ";
				cin >> SalesLevel1 >> SalesLevel2 >> SalesLevel3;
				ManagersSalary(&SalesLevel1, &SalesLevel2, &SalesLevel3);

			} break;

			case 4:
			{
				/*4.	���� �������� ������������� � �������� 50$ �� ������ 100 ����� ����.�� ������ ������ ��������� ���� �������� �� 20$.����������� ���� :
					a.������������ ������ �������� ����� ���� � ���������� ���������, ���������, ������� ����� ���� ��� ���� ��������
					b.������������ ������ ���������� ����� ����, ���������� ����� � �������� ����� ��������.���������, ������� ��� ���� ����� ��������
					c.������������ ������ ���������� ����� ���� � ���������� ���������, ����������, ������� ����� �������� ���� � �������� �� ������*/
				cout << "������������ ������ �������� ����� ���� � ���������� ���������\n���������, ������� ����� ���� ��� ���� ��������" << endl;
				int income, late;
				cout << "������� �������� ����� ���� - ";
				cin >> income;
				cout << "������� ���-�� ��������� - ";
				cin >> late;
				VasyaCoder(&income, &late);

				int str;
				cout << "������� ���-�� ����� - ";
				cin >> str;
				cout << "������� �������� ����� ���� - ";
				cin >> income;
				VasyaCoder2(&income, &str);

				cout << "������� ���-�� ����� - ";
				cin >> str;
				cout << "������� ���-�� ��������� - ";
				cin >> late;
				VasyaCoder3(&late, &str);
			} break;

			case 5:
			{
				/*5.	���������� ���������� ����� ����� � ��������� �� 100 �� 999 � ������� ���� ��� ���������� �����*/
				CountOfNumbs();
			} break;

			case 6:
			{
				/*6.	���������� ���������� ����� ����� � ��������� �� 100 �� 999 � ������� ��� ����� ������*/
				CountOfNumbs();
			} break;

			case 7:
			{
				/*7.	������������ ������ ����� ����� �����.���������� �� ����� ������ ����� ������� ��� ����� 3 � 6 � ������� ������� �� �����.*/
				int numb;
				do
				{
					cout << "������� 4� ������� ����� - ";
					cin >> numb;
				} while (numb < 1000 || numb > 9999);
				NumbDelete(&numb);
			} break;

			case 8:
			{
				/*8.	������������ ������ ����� �����.���������� ������� ��� ����� �����, �� ������� �������� ����� �������� ��� �������.*/
				int numb;
				do
				{
					cout << "������� ���-��� ����� > 0 ---- ";
					cin >> numb;
				} while (numb <= 0);
				BigArr(&numb);

			} break;

			case 9:
			{
				/*9.	������� �� ����� ������ ����������� �����������.������ � ������������� ����������� ��� ������ ����.*/
				int numb;
				do
				{
					cout << "������� ����� �� 1 �� 5";
					cin >> numb;
				} while (numb < 1 || numb > 5);
				CreativeArr(&numb);
			} break;
		}
	} while (task > 0);
	

	system("pause");
}