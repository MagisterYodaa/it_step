#include "getdata.h"

int getdata(double tempreture = 0) {
    srand(time(NULL));
    tempreture = rand() % 101;
    for (int i = 0; i < 4; i++) {
        if (tempreture <= 50) {
            for (int i = 0; i < 4; i++) {
                if (tempreture <= 25) {
                    return tempreture;
                }
                tempreture = rand() % 101;
            }
            return tempreture;
        }
        tempreture = rand() % 101;
    }
    return tempreture;
}
