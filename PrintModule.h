#pragma once
#ifndef PRINTMODULE_H
#define PRINTMODULE_H

using std::cout;
using std::cin;
using std::endl;

void printAtomData(Atom &atom);

void printAtomData(Atom& atom) {

	if (atom.getAtomNumber())
	{
		cout << "\nAtom number: " << atom.getAtomNumber() << "\n";
		cout << "Symbol:" << atom.getAtomSymbol() << "\nName: " << atom.getAtomName() << "\n";
		cout << "Mass (amu): " << atom.getAtomMass() << "\n";
		cout << "Number:\n" <<
			"\tproton -> " << atom.getAtomNProton() <<
			"\tneitron -> " << atom.getAtomNNeitron() <<
			"\telctron -> " << atom.getAtomNElectron() << "\n";

		short atomLevel = atom.getAtomEnergyLevel();
		cout << " N. energy level: " << atomLevel << "\n";

		cout << " Allocation of electron:\n";
		short* arr = atom.getArrElectron();

		for (short *iter = arr, i = 0; iter != arr + atomLevel; iter++)
			cout << "\tLevel -> " << ++i << "\tN. electron -> " << *iter << "\n";
		arr = nullptr;
		cout << "\n";
	}
	else
		cout << "\n\tERROR!\n\tAtom number is not defined!\n";
}
;
#endif