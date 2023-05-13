#include "Passport.h"

#ifndef class_ForeignPassport
#define class_ForeignPassport

class ForeignPassport : public Passport {
protected:
	bool visa;
	int ForeignPassportNumber;
public:
	ForeignPassport() {
		this->visa = false;
		this->ForeignPassportNumber = 54321;
	}

	ForeignPassport(bool visa, int ForeignPassportNumber) {
		this->visa = visa;
		this->ForeignPassportNumber = ForeignPassportNumber;
	}

	bool getVisa() { return visa; }
	int getForeignPassportNumber() { return ForeignPassportNumber; }

	~ForeignPassport() {
		cout << "del ForeignPassport" << endl;
	}
};
#endif