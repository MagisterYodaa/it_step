std::cout << "Вычисление среднего арифметического последовательности положительных чисел." << std::endl;
    std::cout << "Вводите числе. Для заврешения ввода введите ноль." << std::endl;
    int sum = 0;
    int num;
    int i = -1;
    do {
        std::cout << "->";
        std::cin >> num;
        sum += num;
        i++;
    } while (num != 0);

    int arf = sum / i;

    std::cout << "Введено чисел: " << i << std::endl;
    std::cout << "Сумма чисел: " << sum << std::endl;
    std::cout << "Среднее арифметическое: " << arf << std::endl;
