 for (int i = 1; i <= 8; i++) {
        if (i % 2 == 0) {
            for (int i = 1; i <= 4; i++) {
                std::cout << "*";
                std::cout << " ";
            }
       }
        else {
            for (int i = 1; i <= 4; i++) {
                std::cout << " ";
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
