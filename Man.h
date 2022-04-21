#pragma once
#include <string>
#include <iostream>
using namespace std;
class Man
{
private:
	string name;
	int age;
	string male;
	double weight;
public:
	Man();
	Man(string name, int age, string male, double weight);
	Man(const Man& m);
	~Man();

	string getName() const { return name; }
	int getAge() const { return age; }
	string getMale() const { return male; }
	double getWeight() const { return weight; }

	string setName(string name) { this->name = name; }
	int setAge(int age) { this->age = age; }
	string setMale(string value) { male = value; }
	double setWeight(double weight) { if (weight < 0)this->weight = weight; else weight = 0; }

	Man& operator = (const Man& m);

	friend ostream& operator << (ostream& out, const Man& m);
	friend istream& operator >> (istream& in, Man& m);

	operator string () const;

	Man& operator ++ ();
	Man& operator -- ();
	Man operator ++ (int);
	Man operator -- (int);
};


