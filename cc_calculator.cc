#include<iostream>

class Calculator {
	protected:
		int n1;
		int n2;
		char op;
		int result;
		char choice;
	public:
		int calculate();
};

int Calculator::calculate() {
 	std::cout << "Enter the first number ? \n";
	std::cin >> n1;
	std::cout << "Enter the second number ? \n";
	std::cin >> n2;
	std::cout << "Enter the operator ? \n";
	std::cin >> op;
	switch(op) {
		case '+' : result = n1 + n2;
			   std::cout << "result = " << result << "\n";
		break;
		case '-' : result = n1 - n2;
			   std::cout << "result = " << result << "\n";
		break;
		case '*' : result = n1 * n2;
			   std::cout << "result = " << result << "\n";
		break;
		case '/' : result = n1 / n2;
			   std::cout << "result = " << result << "\n";
		break;
		default: std::cout << "Error ! Operation is not correct. \n";
	}
	return 0;
}

class NerdyCalculator: public Calculator {
	public:
		void ncalculator();
		void loop();
};

void NerdyCalculator::ncalculator() {
	std::cout << "nerdy result = " << result + 1 << " \n ";
}


void NerdyCalculator::loop() {
	do {
	       	calculate();
		ncalculator();
		std::cout << "Do you want to calculatte more ? [y/n] \n";
		std::cin >> choice;
	}
	while(choice == 'y');
}	

int main () {
	NerdyCalculator noobbobo;
	noobbobo.loop();
	return 0;
}
	
	
