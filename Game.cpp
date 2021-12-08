#include <iostream>
#include <windows.h>
#include <string>

void startup(int xp = 3, std::string name = "player", int str = 0, int agi = 0, int min = 0, int luc = 0, std::string imp = "none", std::string ansreg = "none", std::string race = "none") {
	std::cout << "Добро Пожаловать в игру \" Название\"" << std::endl; Sleep(1500);
	std::cout << "Перед началом пожалуйста создайте персонажа" << std::endl; Sleep(1500);
	std::cout << "Введите название персонажа -> ";
	getline(std::cin, name);
	std::cout << name <<" " << "сейчас Вы выберете какие характеристики персонажа прокачать"<< std::endl; Sleep(1500);
	std::cout << "Всего у вас есть 3 очков" << std::endl; Sleep(1500);
	std::cout << "Что бы увеличить значение характеристики введите ее название (Например чтобы прокачать силу введите Сила)" << std::endl; Sleep(3000);
	std::cout << "Вам доступны следующие характеристики: " << std::endl; Sleep(1500);
	std::cout << "  Сила " << str << std::endl; Sleep(1500);
	std::cout << "  Ловкость " << agi << std::endl; Sleep(1500);
	std::cout << "  Разум " << min << std::endl; Sleep(1500);
	std::cout << "  Удача " << luc << std::endl; Sleep(1500);
	std::cout << std::endl;
	while (xp != 0) {
		std::cout << "-->";
		std::cin >> imp;

		if (imp == "Сила") { 
			str = str + 1; 
			xp = xp - 1;
		}
		else if (imp == "Ловкость") { 
			agi = agi + 1; 
			xp = xp - 1;
		}
		else if (imp == "Разум") { 
			min = min + 1;
			xp = xp - 1;
		}
		else if (imp == "Удача") { 
			luc = luc + 1;
			xp = xp - 1;
		}
		else { std::cout << "Пожалуйста введите подходящее значение" << std::endl; }
	}
	std::cout << "Вот ваши характеристики:" << std::endl;
	std::cout << "  Сила " << str << std::endl; Sleep(1500);
	std::cout << "  Ловкость " << agi << std::endl; Sleep(1500);
	std::cout << "  Разум " << min << std::endl; Sleep(1500);
	std::cout << "  Удача " << luc << std::endl; Sleep(1500);

	std::cout << std::endl;

	std::cout << "Отлично, пора выбирать расу" << std::endl;
	std::cout << "Вам доступны следующие расы:" << std::endl;
	std::cout << " - Человек" << std::endl;
	std::cout << " - Эльф" << std::endl;
	std::cout << " - Дворф" << std::endl;
	std::cout << " - Хафлинг" << std::endl;
	std::cout << "Если хотите узнать что дает каждая из рас то напишите \"да\", если Вам на это наплевать то напишите \"нет\" " << std::endl;
	std::cout << "Ваш ответ -> ";
	std::cin >> ansreg;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
		if (ansreg == "да") {
			std::cout << "-----Человек-----" << std::endl; Sleep(2000);
			std::cout << "Одна из четырех рас этой игры ... " << std::endl;
			std::cout << "При ее выборе вы получаете:" << std::endl;
			std::cout << "Сила     + 0" << std::endl;
			std::cout << "Ловкость + 1" << std::endl;
			std::cout << "Разум    + 2" << std::endl;
			std::cout << "Удача    + 1" << std::endl;
			std::cout << "Примечание: В дальнейшем из за того что вы человек Вы автоматически становитесь врагами эльфов" << std::endl;
			std::cout << "Перк: Мастер Общения" << std::endl; Sleep(5000);
			std::cout << std::endl;
			std::cout << "-----Эльф-----" << std::endl; Sleep(2000);
			std::cout << "Одна из четырех рас этой игры ... " << std::endl;
			std::cout << "При ее выборе вы получаете:" << std::endl;
			std::cout << "Сила     + 0" << std::endl;
			std::cout << "Ловкость + 3" << std::endl;
			std::cout << "Разум    + 1" << std::endl;
			std::cout << "Удача    + 0" << std::endl;
			std::cout << "Примечание: В дальнейшем из за того что вы эльф Вы автоматически становитесь врагами дварфов" << std::endl;
			std::cout << "Перк: Искусный стрелок" << std::endl; Sleep(5000);
			std::cout << std::endl;
			std::cout << "-----Дварф-----" << std::endl; Sleep(2000);
			std::cout << "Одна из четырех рас этой игры ... " << std::endl;
			std::cout << "При ее выборе вы получаете:" << std::endl;
			std::cout << "Сила     + 4" << std::endl;
			std::cout << "Ловкость - 1" << std::endl;
			std::cout << "Разум    + 0" << std::endl;
			std::cout << "Удача    + 1" << std::endl;
			std::cout << "Примечание: В дальнейшем из за того что вы дварф Вы автоматически становитесь врагами эльфов и друзьями хавлингов" << std::endl;
			std::cout << "Перк: Умелый Кузнец" << std::endl; Sleep(5000);
			std::cout << std::endl;
			std::cout << "-----Хафлинг-----" << std::endl; Sleep(2000);
			std::cout << "Одна из четырех рас этой игры ... " << std::endl;
			std::cout << "При ее выборе вы получаете:" << std::endl;
			std::cout << "Сила     - 1" << std::endl;
			std::cout << "Ловкость + 2" << std::endl;
			std::cout << "Разум    + 0" << std::endl;
			std::cout << "Удача    + 3" << std::endl;
			std::cout << "Примечание: В дальнейшем из за того что вы хафлинг Вы становитесь презираемы всеми...          кроме дварфов" << std::endl;
			std::cout << "Перк: Неплохой Вор" << std::endl; Sleep(2000);
			std::cout << std::endl;
		}
		else if (ansreg == "нет") {
			std::cout << "Понятно, ну вижу вы прошаренный, тогда начем..." << std::endl;
		}
		else {
			std::cout << "Да или Нет, принимается только ЭТИ два ответа" << std::endl;
			std::cin >> ansreg;
		}
	std::cout << std::endl;

	std::cout << "Ваш выбор -> ";
	std::cin >> race;

	while (race != "Человек" || race != "Эльф" || race != "Дварф" || race != "Хафлинг") {
		if (race == "Человек") {
			str = str + 0;
			agi = agi + 1;
			min = min + 2;
			luc = luc + 1;
		}
		else if (race == "Эльф") {
			str = str + 0;
			agi = agi + 3;
			min = min + 1;
			luc = luc + 0;
		}
		else if (race == "Дварф") {
			str = str + 4;
			agi = agi - 1;
			min = min + 0;
			luc = luc + 1;
		}
		else if (race == "Хафлинг") {
			str = str - 1;
			agi = agi + 2;
			min = min + 0;
			luc = luc + 3;
		}
		else {
			std::cout << "Нуууууу, такой расы не существует и программа ломается, пожалуйста запустите меня снова";
			std::cin >> race;
		}
	}
	Sleep(3000);
	std::cout << "Супер, Вы закончили создание персонажа..." << std::endl;
	std::cout << std::endl;
	std::cout << "Вот Ваш профиль:" << std::endl;
	std::cout << "Ваше имя: " << name << std::endl;
	std::cout << std::endl;
	std::cout << "Ваши характеристики:" << std::endl;
	std::cout << "  Сила " << str << std::endl; Sleep(1500);
	std::cout << "  Ловкость " << agi << std::endl; Sleep(1500);
	std::cout << "  Разум " << min << std::endl; Sleep(1500);
	std::cout << "  Удача " << luc << std::endl; Sleep(1500);
	std::cout << std::endl;
	std::cout << "Ваша раса: " << race << std::endl;

	std::cout << "-------------------Удачи в игре-------------------" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	startup();
}
