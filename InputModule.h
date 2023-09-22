#pragma once
#ifndef INPUTMODULE_H
#define INPUTMODULE_H

int inputValidValue(int a);
short inputSize(std::string text, short MIN, short MAX);

int inputValidValue(int a)
{
    while (true)
    {
        cout << "\tenter -> ";
        cin >> a;
        if (cin.peek() != '\n')
        {
            cout << "\t\tINPUT ERROR!\n";
            cin.clear();
            cin.ignore(32767, '\n');
            continue;
        }

        cin.ignore(32767, '\n');
        system("CLS");

        return abs(a);
    }
}
;
short inputSize(std::string text, short MIN, short MAX) {

    short size = 0;

    do {
        cout << "\n\tnumber of " + text + " (" << MIN << "..." << MAX << ")\n";
        size = inputValidValue(size);
        system("CLS");

    } while (size < MIN || size > MAX);

    return size;
}
;
#endif