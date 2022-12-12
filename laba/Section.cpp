#include "Section.h"

Section::Section(float left, float right)
{
	this->left = left;
	this->right = right;
}

Section::Section(Section &sectionName)
{
	left = sectionName.left;
	right = sectionName.right;
}

Section::Section()
{
	cout << "Выполнился конструктор по умолчанию.";
}

void Section::Enter()
{
	do
	{
		cout << "\nВведите значение левой границы отрезка: ";
		cin >> left;

		cout << "Введите значение правой границы отрезка: ";
		cin >> right;

		if (left >= right)
		{
			Error();
		}
		else
		{
			Print();
		}
	} while (left >= right);
}

void Section::Print()
{
	cout << "Результат: [" << left << ";" << right << "].";
}

void Section::Error()
{
	cout << "\nЛевая граница отрезка не может быть больше или равна правой, попробуйте еще раз!";
}

float Section::Length()
{
	return(right - left);
}

Section::~Section()
{
	cout << "\nВыполнился деструктор.";
}