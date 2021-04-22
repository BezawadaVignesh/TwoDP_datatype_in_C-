#ifndef TWODP_H_
#define TWODP_H_

#include<iostream>

using std::ostream;

class TwoDP {
public:

	TwoDP();

	TwoDP(int x);

	TwoDP(double x);

	int value() const;

private:
	double marks;


friend TwoDP operator+(TwoDP a, TwoDP b);
friend TwoDP operator*(TwoDP a, TwoDP b);
friend TwoDP operator/(TwoDP a, TwoDP b);
friend bool operator==(TwoDP a,TwoDP b);
friend bool operator!=(TwoDP a, TwoDP b);
friend ostream& operator<<(ostream& os, TwoDP a);
};

#endif
