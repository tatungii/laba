#include "Section.h"

Section::Section()
{
	cout << "���������� �����������.";
	test = "\n������������� ������� �������� ���������.";
}

void Section::Enter()
{
	cout << "\n������� �������� ����� ������� �������: ";
	cin >> left;

	cout << "������� �������� ������ ������� �������: ";
	cin >> right;
}

void Section::Print()
{
	cout << "���������: [" << left << ";" << right << "].";
}

void Section::Error()
{
	cout << "\n����� ������� ������� �� ����� ���� ������ ��� ����� ������, ���������� ��� ���!";
}

void Section::Length()
{
	cout << "\n����� �������: " << right - left << ".";
}

Section::~Section()
{
	cout << "\n���������� ����������.";
}