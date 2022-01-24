#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int randomNumber = rand() % 100;
	cout << "Компьютер задумал число угодай его" << endl;

	int a;
	while (true) {
		cout << "-> ";
		cin >> a;
		if (a == randomNumber) {
			cout << "Ты попал в точку" << std::endl;
			break;
		}
		else if (a > randomNumber) {
			cout << "Берите ниже" << endl;
		}
		else if (a < randomNumber) {
			cout << "Берите выше" << endl;
		}

	}
}
