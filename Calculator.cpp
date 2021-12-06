#include <iostream>

void add(double x, double y, double res) {
	res = x + y;
	std::cout << res << std::endl;
}

void sub(double x, double y, double res) {
	res = x - y;
	std::cout << res << std::endl;
}

void mul(double x, double y, double res) {
	res = x * y;
	std::cout << res << std::endl;
}

void div(double x, double y, double res) {
	res = x / y;
	std::cout << res << std::endl;
}

int main(double x, double y, double otv) {
	std::cout << "Vvedite chisla" << std::endl;
	
	std::string fun;
	std::cin >> x;
	std::cin >> y;

	std::cout << "Viberite deistvie" << std::endl;
	std::cout << "Adding - add" << std::endl;
	std::cout << "Substraction - sub" << std::endl;
	std::cout << "Multiplication - mul" << std::endl;
	std::cout << "Division - div" << std::endl;
	std::cin >> fun;
	if (fun == "add") { add(x, y, otv); }
	else if (fun == "sub") { sub(x, y, otv); std::cout << otv << std::endl;
	}
	else if(fun == "mul") { mul(x, y, otv); std::cout << otv << std::endl;
	}
	else if(fun == "div") { div(x, y, otv); std::cout << otv << std::endl;
	}
	else { std::cout << "Error" << std::endl; std::cout << otv << std::endl;
	}

}
