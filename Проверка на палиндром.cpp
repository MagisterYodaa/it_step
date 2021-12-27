#include <iostream>
#include <cmath>

int main()
{
	int a;
	int origin;
	std::cout << "Vvedite chilslo: ";
	std::cin >> a;
	origin = a;
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
		rev = r[i] * pow(10, count - i);
		total = total + rev;
	}
	
	if (origin == total) { std::cout << "Palindrome" << std::endl; }
	else { std::cout << "Not Palindrome" << std::endl; }

}
