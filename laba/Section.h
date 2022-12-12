#pragma once
#include <iostream>
using namespace std;
class Section
{
	friend void friendly(Section& segment);
	friend Section operator+(const Section& a, const Section& b);

private:
	string test;

public:
	float a;
	float left;
	float right;
	Section();
	void Enter();
	void Print();
	void Error();
	void Length();
	~Section();
};