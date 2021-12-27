	int a;
	std::cout << "Vvedite kolichestvo chisel: ";
	std::cin >> a;
	double b[1000];
	int count = 0;
	double sum = 0;
	for (int i = 0; i < a; i++) {
		std::cin >> b[i];
		sum += b[i];
		count++;
	}

	double total = sum / count;
	std::cout << total << std::endl;
