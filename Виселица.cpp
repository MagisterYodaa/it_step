const int size = 5;
    std::string words[size] = { "game", "rules", "board", "program", "qwertyuiop"};
    srand(time(NULL));
    int random = rand() % 5;
    std::string word = words[3];
    int length = word.size();
    for (int i = 0; i < length; i++) {
        std::cout << "_ ";
    }
    std::cout << std::endl;
    char a[] = "program";

    char letter;
    int i = 0;
    while (true) {
        
        std::cin >> letter;

        for (int i = 0; i < length; i++) {
            if (a[i] == letter) {
                std::cout << a[i];
                i++;
            }
            else {
                std::cout << "_";
            }
        }
        if (i == 7) { break; }
    }
    
}
