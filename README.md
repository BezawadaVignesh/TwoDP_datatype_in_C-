# TwoDP_datatype_in_C++
This is a simple datatype written in C++ which holds a number up to two decimal points. 

## Usage
 - Save TwoDP.h and TwoDP.cpp files in your project folder, OR the default folder in which your compiler searchs.
 - include TwoDP.h in your file.
 
````C++
 #include "TwoDP.cpp"
````

## Example
````C++
#include "TwoDP.cpp"
#include<iostream>

using namespace std;

int main(){
	TwoDP x, y=10;
	x = 15.19567;
	
	cout<<"x=" << x << ",\ny=" << y << ",\nand x+y=" <<x+y;
	
	return 0;
}
````
__Output__
````
x=15.20,
y=10.00,
and x+y=25.20
````
