#include <iostream>
#include <cmath>

int main()
{
	int a;
	std::cout << "Vvedite chilslo: ";
	std::cin >> a;
	int num = 1;
	int extr=a/10;
	while (extr != 0) {
		num++;
		extr = extr / 10;
	}
	std::cout << num << std::endl;

}
