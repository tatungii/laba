#include "Section.h"
#include "stdlib.h"

/*
 *	|	Создать класс отрезков Section, содержащий два вещественных поля - концы отрезка.	|
 *	|	В классе описать методы ввода и вывода значений полей. Вывод организовать в			|
 *	|	формате [a;b].																		|
 */

void friendly(Section& segment)
{
	cout << segment.test;
}

float operator+(Section& a, Section& b)
{
	return  max(a.right, b.right) - min(a.left, b.left);
}

Section operator++(Section& s)
{
	s.left -= 1;
	s.right += 1;
	return s;
}

istream& operator >> (istream& in, Section& p)
{
	in >> p.left>>p.right;
	return in;
}

ostream& operator << (ostream& os, Section& p)
{
	return os << "\nЛевая граница отрезка: " << p.left << "." << "\nПравая граница отрезка: " << p.right << ".";
}

int main()
{
	setlocale(LC_ALL, "ru");

	Section segment;

	segment.Enter();

	segment.Length();

	friendly(segment);

	cin >> segment;
	cout << segment;

	return 0;
}