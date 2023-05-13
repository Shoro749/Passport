#include "ForeignPassport.h"

int main() {
	ForeignPassport* foreignpassport = new ForeignPassport();
	cout << foreignpassport->getName() << " " << foreignpassport->getSurname() << endl;
	cout << foreignpassport->getAge() << endl << "Passport Number: "
		<< foreignpassport->getPassportNumber() << endl << "Foreign Passport Number: "
		<< foreignpassport->getForeignPassportNumber() << endl << foreignpassport->getVisa();
	cout << "\n\n";
	delete foreignpassport;

	return 0;

}