int a = 102;
int n = a;
int a1 = a % 10;
a /= 10;
int a2 = a % 10;
a /= 10;
int a3 = a % 10;
int count = 0;

while (true) {
	if (n == 999)break;
	a = n;
	int a1 = a % 10;
	a /= 10;
	int a2 = a % 10;
	a /= 10;
	int a3 = a % 10;
	if (a1 != a2 && a2 != a3 && a1 != a3) std::cout << n << std::endl;
	n++;
	count++;
}
std::cout << std::endl;
int time = count * 3;
std::cout << time << " sec" << std::endl;
