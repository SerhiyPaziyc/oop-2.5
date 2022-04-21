#pragma once
#include "Man.h"
class Student
{
private:
	int yos;
	Man man;
public:
	Student();
	Student(int yos, Man Man);
	Student(const Student& x);
	~Student();

	int getYos() const { return yos; }
	Man getMan() const { return man; }

	void setYos(int yos) { if (yos > 0)this->yos = yos; else yos = 0; }
	void setMan(Man man) { this->man = man; }

	Student& operator = (const Student& s);

	friend ostream& operator << (ostream&, Student&);
	friend istream& operator >> (istream&, Student&);

	operator string();

	Student& operator ++ ();
	Student& operator -- ();
	Student operator ++ (int);
	Student operator -- (int);
};