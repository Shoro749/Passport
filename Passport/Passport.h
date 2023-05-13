#include <iostream>
using namespace std;

#ifndef class_passport
#define class_passport

class Passport {
protected:
	string name;
	string surname;
	short age;
	int passportNumber;
public:
	Passport() {
		this->name = "Incogrito";
		this->surname = "Incogrito";
		this->age = 18;
		this->passportNumber = 12345;
	}
	Passport(string name, string surname, short age, int passportNumber) {
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->passportNumber = passportNumber;
	}
	
	string getName() { return name; }
	string getSurname() { return surname; }
	short getAge() { return age; }
	int getPassportNumber() { return passportNumber; }

	~Passport() {
		cout << "del passport" << endl;
	}
};
#endif
