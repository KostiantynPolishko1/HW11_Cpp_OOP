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
		cout << "Atom number: " << atom.getAtomNumber() << "\n";
		cout << "Symbol:" << atom.getAtomSymbol() << "\nName: " << atom.getAtomName() << "\n";
		cout << "Mass (amu): " << atom.getAtomMass() << "\n";
		cout << "Number:\n" <<
			"\tproton -> " << atom.getAtomNProton() <<
			"\tneitron -> " << atom.getAtomNNeitron() <<
			"\telctron -> " << atom.getAtomNElectron() << "\n";
		cout << "N. energy level: " << atom.getAtomEnergyLevel() << "\n";

		cout << "\tAllocation of electron:";
	}
	else
		cout << "\n\tERROR!\n\tAtom number is not defined!\n";
}
;
#endif