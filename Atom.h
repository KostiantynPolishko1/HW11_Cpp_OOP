#include "DataBase.h"
#pragma once

#ifndef ATOM_H
#define ATOM_H

class Atom
{
private:
	string _atomSymbol;
	string _atomName;
	short _atomNumber;
	float _atomMass;

public:
	Atom() : _atomSymbol{}, _atomName{}, _atomNumber{}, _atomMass{}
	{ }
	Atom(short atomNumber) {

		if (atomNumber >= 1 && atomNumber <= 18) {
			_atomNumber = atomNumber;

			atomNumber--;
			_atomSymbol = arrAtomName[atomNumber][0];
			_atomName = arrAtomName[atomNumber][1];
			_atomMass = arrAtomMass[atomNumber];
		}
		else
			Atom();
	}
}
;
#endif