// working.cpp by Craig
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
	int numTest = 101;
	bool primeFlag = true;

	cout << "Number to test for primality: " << numTest << "\n";
	cout << "Test numbers: \n";
	for (int n = 2 ; n <= sqrt(numTest) ; n++) {
		if (numTest % n == 0) primeFlag = false;
	}

	primeFlag == true ? cout << numTest << " is prime\n" : cout << numTest << " is not prime\n" ;
	return 0;
}
// Adding an extra line of commenting for git testing
