#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class ArrayUtils {
	// Public
	public:
		// Declare an array with 10 elements (11)
		int Array[10];
		// Get the max element of array
		int max() {
			int maxx = Array[0];
			for (int i = 0; i < 10; i++) {
				if (Array[i] > maxx) {
					maxx = Array[i];
				}
			}
			return maxx;
		};
		int all() {
			for (int i = 0; i < 10; i++) cout << Array[i] << endl;
			return 0;
		}
    		int sort() {
			int temp;

			for (int i = 0; i < 10; i++) {
			        for (int j = 0; j < 10 - 1; j++) {
			                if (Array[j] > Array[j + 1]) {
				                temp = Array[j];
				                Array[j] = Array[j + 1];
				                Array[j + 1] = temp;
			                }
			        }
		        }
			all();
		};
};
