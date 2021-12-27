#include <iostream>
#include <cmath>

int main()
{
	int a;
	std::cout << "Vvedite chilslo: ";
	std::cin >> a;
	int rev = 0;
	int r[100];
	int count = 0;
	int total = 0;
	while (true) {
		r[count] = a % 10;
		a = a / 10;
		if (a == 0) break;
		count++;
	}
	for (int i = 0; i <= count; i++) {
		rev = r[i] * pow(10,count-i);
		total = total + rev;
	}
	std::cout << total;

}
