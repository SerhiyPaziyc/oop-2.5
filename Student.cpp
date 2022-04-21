#include "Man.h"
#include "Student.h"
#include <sstream>

Student::Student()
{
	yos = 0;
	man;
}

Student::Student(int yos, Man man)
{
	this->yos = yos;
	this->man = man;
}

Student::Student(const Student& s)
{
	this->yos = s.yos;
	this->man = s.man;
}

Student::~Student()
{

}

Student& Student::operator =(const Student& s)
{
	man = s.man;
	yos = s.yos;

	return*this;
}
ostream& operator <<(ostream& out, Student& s)
{
	out << string(s);
	return out;
}
istream& operator >>(istream& in, Student& s)
{
	cout << endl;
	cout << "man = ? "; in >> s.man;
	cout << "yos = ? "; in >> s.yos;
	cout << endl;

	return in;
}
Student::operator string ()
{
	stringstream ss;
	ss << "yos = " << yos << endl;
	return string(man) + ss.str();
}
Student& Student::operator ++ () {
	++man;
	return*this;
}
Student& Student::operator -- () {
	--man;
	return*this;
}
Student Student::operator ++(int)
{
	Student s(*this);
	man++;
	return s;
}
Student Student::operator --(int)
{
	Student s(*this);
	man--;
	return s;
}