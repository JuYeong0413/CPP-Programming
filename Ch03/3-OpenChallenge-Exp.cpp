#include <iostream>
using namespace std;

#include "Exp.h"

Exp::Exp() {
	base = 1;
	exp = 1;
}

Exp::Exp(int b, int e) {
	base = b;
	exp = e;
}

Exp::Exp(int b) {
	base = b;
	exp = 1;
}

int Exp::getValue() {
	int result = 1;
	for (int i = 1; i <= exp; i++) {
		result *= base;
	}
	return result;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exp;
}

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue()) return true;
	else return false;
}