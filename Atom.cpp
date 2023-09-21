#include "Atom.h"

short Atom::initEnergyLevel(short atomNumber)
{
    short size = sizeof(arrAtomPeriod) / sizeof(arrAtomPeriod[0]);
    for (short i = 0; i < size; i++)
        if (atomNumber >= arrAtomPeriod[i][0] && atomNumber <= arrAtomPeriod[i][1])
            return ++i;
}
;
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
;

string Atom::getAtomSymbol()
{
    return _atomSymbol;
}

string Atom::getAtomName()
{
    return _atomName;
}

short Atom::getAtomNumber()
{
    return _atomNumber;
}

short Atom::getAtomNProton()
{
    return _atomNProton;
}

short Atom::getAtomNNeitron()
{
    return _atomNNeitron;
}

 short Atom::getAtomNElectron()
{
    return _atomNElectron;
}

 short Atom::getAtomEnergyLevel()
{
    return _atomEnergyLevel;
}

 float Atom::getAtomMass()
{
    return _atomMass;
}

 short* Atom::getArrElectron()
{
    return _arrElectron;
}

 void Atom::setAtomNNeitron(short atomNNeitron)
{
    _atomNNeitron = atomNNeitron;
}
