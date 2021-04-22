#include "TwoDP.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

TwoDP::TwoDP(){value = 0;};     //Default constructor that constructs a TwoDP value to 0

TwoDP::TwoDP(int x){ value = x;};

TwoDP::TwoDP(double x){ value = round(x*100)/100;};

//Overloaded operators

TwoDP operator +(TwoDP a, TwoDP b) {
	TwoDP c;
	c = (a.value + b.value);
	return c;   //returns a+b
}

TwoDP operator *(TwoDP  a, TwoDP  b) {
	TwoDP c;
	c = round(a.value * b.value*100)/100;
	return c; //returns a*b
}

TwoDP operator /(TwoDP a, TwoDP b) {
	if (b.value == 0){
        throw domain_error("div by 0 exception"); // If b equals 0, throw a std::domain_error exception.
	}
	else{
		TwoDP c;
		c = round((a.value/b.value)*100)/100;
		return c; //returns a/b
	}

}

bool operator==(TwoDP a,TwoDP b) {
	bool same = (a.value == b.value);
	return same; // returning true if a and b represent equal values and false otherwise.
}

bool operator!=(TwoDP a, TwoDP b) {
	bool notequal = (a.value != b.value);
	return notequal; // returning false if a and b represent equal values and true otherwise.
}

ostream& operator<<(ostream& os, TwoDP a) {
	os << setprecision(2)<<fixed<<a.value;
	return os;
}
