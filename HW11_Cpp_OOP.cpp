#include "Atom.h"
#include "PrintModule.h"
#include "InputModule.h"

int main(void)
{
    cout << "Atom!\n";

    Atom atom; //default constructor call
    printAtomData(atom);

    short atomNumber = inputSize("Atom", MIN, MAX);

    Atom atom2(atomNumber);
    printAtomData(atom2);

    return 0;
}
