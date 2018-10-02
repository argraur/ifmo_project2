#include <iostream>
#include <cstdlib>
#include <cmath>
#include "ArrayUtils.cpp"

using namespace std;

int main() {
	ArrayUtils *A;
	A = new ArrayUtils();
	for (int i = 0; i < 10; i++) {
		cin >> A -> Array[i];
	}
	cout << "Max element of an array: " << A -> max() << endl;
	A -> sort();
	delete A;
	return 0;
}
