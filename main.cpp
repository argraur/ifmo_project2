#include <iostream>
#include <cstdlib>
#include <cmath>

struct Dot {
	int x, y;
};

struct Polygon {
	int anglex[100];
	int angley[100];
};

int main() {
	// Dot
	Dot dot;
	std::cout << "Dot X: "; std::cin >> dot.x;
	std::cout << "Dot Y: "; std::cin >> dot.y;
	std::cout << "Dot coordinates: (" << dot.x << ";" << dot.y << ")" << std::endl;

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
