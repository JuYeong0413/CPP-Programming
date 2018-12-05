#pragma once
#ifndef EXP_H
#define EXP_H

class Exp {
private:
	int base;
	int exp;

public:
	Exp();
	Exp(int b, int e);
	Exp(int b);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};

#endif