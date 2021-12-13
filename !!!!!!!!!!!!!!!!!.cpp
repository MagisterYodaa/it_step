#include <cstdlib>
#include <iostream>


int t(double tempreture = 0) {
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        tempreture = rand() % 101;
        if (tempreture <= 50) {
            for (int i = 0; i < 4; i++) {
                tempreture = rand() % 101;
                if (tempreture <= 25) {
                    return tempreture;
                }
            }
            return tempreture;
        }
    }
    return tempreture;
}
