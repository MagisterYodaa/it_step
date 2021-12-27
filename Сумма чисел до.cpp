int a;
	std::cout << "Vvedite chilslo: ";
	std::cin >> a;
	int n = 1;
	int sum = 0;
	for (int i = 0; i < a; i++) {
		sum += n;
		n += 1;
	}

	std::cout << sum << std::endl;
