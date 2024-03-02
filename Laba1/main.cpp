#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	short sh = 327; // -2^15...2^15-1
	int in = 213213; // -2^31...2^31-1
	long l = 237648; // -2^31...2^31-1
	float fl = -10.5; // -2^31...2^31-1
	double d = 13.234; // -2^63...2^63-1

	float r;
	float Pi = 3.14;
	float sq = 0;
	std::cout << "Радиус:";
	std::cin >> r;
	sq = Pi * r * r; // fdgdfg
	std::cout << "Полученная площадь:" << sq;
	return 0;
}