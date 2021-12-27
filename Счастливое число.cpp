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

	int first = 0;
	for (int i = 0; i < 3; i++) {
		first += (origin % 10) * 10;
		origin /= 10;
	}

	int second = 0;
	for (int i = 0; i < 3; i++) {
		second += (total % 10) * 10;
		total /= 10;
	}

	if (first == second) { std::cout << "Lucky number" << std::endl; }
	else { std::cout << "Not Lucky" << std::endl; }
