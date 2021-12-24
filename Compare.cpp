int main()
{
	int num[5];
	for (int i = 0; i < 5; i++) {
		std::cout << "num[" << i << "] -> ";
		std::cin >> num[i];
	}
	
	int min = num[0];

	for (int i = 0; i < 5; i++) {
		if (min >= num[i])min = num[i];
	}
	std::cout << "Minmimal number -> " << min << "\n";
	
}
