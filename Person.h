#pragma once
#include <string>
using namespace std;

enum struct Sex { male, female };

// TODO:  Add copy constructor


class Person
{
private:

	string _firstName;
	string _lastName;
	Sex _sex;
	bool _living;
	Person* _parent1;
	Person* _parent2;


public:
	Person(string firstName,  string lastname,  Sex sex,  bool living);
	Person();
	void AddParents(Person* parent1, Person* parent2);
	string FirstName();
	string LastName();
	~Person();
};