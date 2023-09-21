#include "Atom.h"

short Atom::initEnergyLevel(short atomNumber)
{
	short size = sizeof(arrAtomPeriod) / sizeof(arrAtomPeriod[0]);
	for (short i = 0; i < size; i++)
		if (atomNumber >= arrAtomPeriod[i][0] && atomNumber <= arrAtomPeriod[i][1])
			return ++i;
}
