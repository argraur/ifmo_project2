#include <iostream>
#include <cstdlib>
#include <cmath>

#ifdef _WIN32

#include <windows.h>

#endif

#ifdef linux

#include <unistd.h>

#endif

struct Dot {
	int x, y;
};

struct Polygon {
	int anglex[100];
	int angley[100];
};

int PolygonRun() {
	#ifdef linux
		system("/bin/bash -c clear");
	#else
		system("CLS");
	#endif
        // Polygon
        Polygon polygon;
        int angles;
        double sum = 0;
        std::cout << "How many angles your polygon has: ";
        std::cin >> angles;
        if (angles < 4) return 1;
        std::cout << "Enter Polygon's " << "1" << " X: ";
        std::cin >> polygon.anglex[0];
        std::cout << "Enter Polygon's " << "1" << " X: ";
        std::cin >> polygon.angley[0];
        polygon.anglex[1] = polygon.anglex[0];
        polygon.angley[1] = polygon.angley[0];
        for (int i = 0; i < (angles - 1); i++) {
                std::cout << std::endl;
                std::cout << "Enter Polygon's " << i + 2 << " X: ";
                std::cin >> polygon.anglex[2];
                std::cout << "Enter Polygon's " << i + 2 << " Y: ";
                std::cin >> polygon.angley[2];
                sum = sum + ( polygon.anglex[1] + polygon.anglex[2] ) * (polygon.angley[2] - polygon.angley[1]);
                polygon.anglex[1] = polygon.anglex[2];
                polygon.angley[1] = polygon.angley[2];
        }
        sum = sum + ( polygon.anglex[0] + polygon.anglex[2] ) * ( polygon.angley[0] - polygon.angley[2]);
        std::cout << std::endl;
        std::cout << "Your polygon's area: " << abs(sum) / 2 << " dots^2" << std::endl;
	return 0;
}

int DotRun() {
        #ifdef linux
                system("/bin/bash -c clear");
        #else
                system("CLS");
        #endif
        // Dot
        Dot dot;
        std::cout << "Dot X: "; std::cin >> dot.x;
        std::cout << "Dot Y: "; std::cin >> dot.y;
        std::cout << "Dot coordinates: (" << dot.x << ";" << dot.y << ")" << std::endl;
	return 0;
}

int main() {
	// Menu
	for (;;) {
	        #ifdef linux
                	system("/bin/bash -c clear");
        	#else
                	system("CLS");
        	#endif
		std::cout << "1. Dot" << std::endl;
		std::cout << "2. Polygon" << std::endl;
		std::cout << "0. Exit" << std::endl;
		int choice;
		std::cout << "Make a choice (0-2): " << std::endl; std::cin >> choice;
		switch (choice) {
			case 0:
				#ifdef linux
                			system("/bin/bash -c clear");
        			#else
                			system("CLS");
        			#endif
				return 0;
				break;
			case 1:
				DotRun();
                                #ifdef linux
                                        system("/bin/bash -c read");
                                #else
                                        system("pause");
                                #endif
				break;
			case 2:
				PolygonRun();
                                #ifdef linux
                                        system("/bin/bash -c read");
                                #else
                                        system("pause");
                                #endif
				break;
			default:
				break;
		}
	}
}
