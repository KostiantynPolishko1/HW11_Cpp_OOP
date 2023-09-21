#include "Atom.h"

short* Atom::initElectronLevel(short* _arrElectron, short _atomNumber, short _atomEnergyLevel)
{
    _arrElectron = new short[_atomEnergyLevel];

    for (short i = 0; i < _atomEnergyLevel; i++)
    {
        short max = 2 * (i + 1) * (i + 1);

        if (_atomNumber > max)
        {
            _arrElectron[i] = max;
            _atomNumber -= _arrElectron[i];
        }
        else if (_atomNumber - 1 <= max && _atomNumber * 2 == max)
        {
            _arrElectron[i] = _atomNumber - 1;
            _atomNumber -= _arrElectron[i];
        }
        else if (_atomNumber - 1 <= max && _atomNumber * 2 > max)
        {
            _arrElectron[i] = _atomNumber - 2;
            _atomNumber -= _arrElectron[i];
        }
        else if (_atomNumber - 1 > max)
        {
            _arrElectron[i] = max;
            _atomNumber -= _arrElectron[i];
        }
        else
            _arrElectron[i] = _atomNumber;
    }

    return _arrElectron;
}

short Atom::initEnergyLevel(short atomNumber)
{
	short size = sizeof(arrAtomPeriod) / sizeof(arrAtomPeriod[0]);
	for (short i = 0; i < size; i++)
		if (atomNumber >= arrAtomPeriod[i][0] && atomNumber <= arrAtomPeriod[i][1])
			return ++i;
}
