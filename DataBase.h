#pragma once
#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
using std::string;

const float arrAtomMass[]{ 1.00797f, 4.00260f, 6.941f, 6.941f, 9.01218f, 10.81f, 12.011f, 14.0067f,
15.9994f, 18.998403f, 20.179f, 22.98977f, 24.305f, 26.98154f };

const short arrAtomPeriod[][2]{ {1, 2}, {3, 10}, {11, 18} };

const char arrAtomName[][3][20]{ {"H", "Hydrogen"}, {"He", "Helium"}, {"Li", "Lithium"}, {"Be", "Beryllium"},
	{"B", "Boron"}, {"C", "Carbon"}, {"N", "Nitrogen"}, {"0", "Oxygen"}, {"F", "Fluorine"}, {"Ne", "Neon"},
	{"Na", "Sodium"}, {"Mg", "Magnesium"}, {"Al", "Aluminum"} };

#endif