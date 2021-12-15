#include "getdata.h"
#include <windows.h>

int main()
{
	int a;
	int larger50=0;
	int less50=0;
	int less25=0;
	for (int i=0; i < 1000; i++) {
		std::cout << getdata() << std::endl; Sleep(1000);
		a = getdata();
		if (a >= 50) {
			larger50 ++;
		}
		else {
			if (a <= 25) {
				less25++;
			}
			else {
				less50++;
			}
		}

	}
	std::cout << larger50 << std::endl;
	std::cout << less50 << std::endl;
	std::cout << less25 << std::endl;
}
