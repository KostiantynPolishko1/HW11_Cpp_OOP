#include "Atom.h"
#include "PrintModule.h"
#include "InputModule.h"

int main(void)
{
    cout << "Atom!\n";
    Atom atom;
    printAtomData(atom);

    short atomNumber = inputSize("Atom", MIN, MAX);

    Atom atom(atomNumber);
    printAtomData(atom);

    return 0;
}
