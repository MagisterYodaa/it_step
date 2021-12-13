#include <iostream>

unsigned int PRNG()
{
    // Наше стартовое число - 4 541
    static unsigned int seed = 4548523600261;

    // Берем стартовое число и, с его помощью, генерируем новое значение.
    // Из-за использования очень больших чисел (и переполнения) угадать следующее число исходя из предыдущего - очень сложно
    seed = (825372958576613 * seed + 23964058743);

    // Берем стартовое число и возвращаем значение в диапазоне от 0 до 32767
    return seed % 100;
}

int t(int tempreture = 0) {
    tempreture = PRNG();
    for (int i = 0; i < 4; i++) {
        tempreture = PRNG();
        if (tempreture <= 50) {
            std::cout << tempreture << std::endl;
            return 0;
        }
    }
    std::cout << tempreture << std::endl;
}


void cout() {
    // Выводим 100 случайных чисел
    for (int count = 0; count < 100; ++count)
    {
        t();

        // Если вывели 5 чисел, то вставляем символ новой строки
        if ((count + 1) % 5 == 0)
            std::cout << "\n";
    }
}



int main()
{
    cout();
}
