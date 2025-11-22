#include <iostream>
using namespace std;

#include "func.h"

void funcH (){
	cout << "funcH\n\n";
}

void functionWithParameters(int a) { //формальный параметр (копии настоящих параметров)
	a += 10;
}

void functionWithParameters(int& a, bool f) { //функции можно делать с одним названием (главное разные аргументы)
	a += 10;
}

void functionWithParameters(int* a) {
	*a = 10;
}