#include "Man.h"
#include <sstream>

Man::Man()
{
	name = "";
	age = 0;
	male = "";
	weight = 0;
}

Man::Man(string name, int age, string value, double weight)
{
	this->name = name;
	this->age = age;
	this->male = value;
	if (weight < 0)
		this->weight = weight;
	else weight = 0;
}

Man::Man(const Man& m)
{
	this->name = m.name;
	this->age = m.age;
	this->male = m.male;
	this->weight = m.weight;
}

Man::~Man()
{

}

Man& Man::operator =(const Man& m)
{
	name = m.name;
	age = m.age;
	male = m.male;
	weight = m.weight;

	return *this;
}

ostream& operator <<(ostream& out, const Man& m)
{
	out << string(m);
	return out;
}

istream& operator >>(istream& in, Man& m)
{
	cout << endl;
	cout << "name = ? "; in >> m.name;
	cout << "age = ? "; in >> m.age;
	cout << "male = ? "; in >> m.male;
	cout << "weight = ? "; in >> m.weight;

	return in;
}

Man::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "name = " << name << endl;
	ss << "age = " << age << endl;
	ss << "male = " << male << endl;
	ss << "weight = " << weight << endl;

	return ss.str();
}

Man& Man::operator ++ ()
{
	++age;
	++weight;
	return *this;
}

Man& Man::operator -- ()
{
	--age;
	--weight;
	return *this;
}

Man Man::operator ++ (int)
{
	Man t(*this);
	age++;
	weight++;
	return t;
}

Man Man::operator -- (int)
{
	Man t(*this);
	age--;
	weight++;
	return t;
}
