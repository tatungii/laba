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
	cout << "���������� ����������� �� ���������.";
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

float Section::Length()
{
	return(right - left);
}

Section::~Section()
{
	cout << "\n���������� ����������.";
}