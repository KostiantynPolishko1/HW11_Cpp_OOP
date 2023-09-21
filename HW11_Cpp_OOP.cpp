#include "Atom.h"
#include "PrintModule.h"

int main(void)
{
    cout << "Atom!\n";
    Atom atom(13);
    printAtomData(atom);

    return 0;
}
