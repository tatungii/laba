#include "Section.h"

Section::Section()
{
	cout << "Выполнился конструктор.";
	test = "\nДружественная функция работает корректно.";
}

void Section::Enter()
{
	cout << "\nВведите значение левой границы отрезка: ";
	cin >> left;

	cout << "Введите значение правой границы отрезка: ";
	cin >> right;
}

void Section::Print()
{
	cout << "Результат: [" << left << ";" << right << "].";
}

void Section::Error()
{
	cout << "\nЛевая граница отрезка не может быть больше или равна правой, попробуйте еще раз!";
}

void Section::Length()
{
	cout << "\nДлина отрезка: " << right - left << ".";
}

Section::~Section()
{
	cout << "\nВыполнился деструктор.";
}