#include <cstdio>
#include <iostream>
#include <string>

enum class Operation :char {
	Add = '+',
	Subtract = '-',
	Multiply = '*',
	Divide = '/'
};

struct Calculator {
	
		Calculator() {
		Operation add = Operation::Add;
		char op = 'c';
		op: add;
	}

		int calculate(int a, int b, char op) {
		int sum = a + b;
		int div = a / b;
		int mul = a * b;
		int sub = a - b;
		switch (op) {
		case ('+'):
			printf("x + y = %d\n", sum);
			return sum;
			break;
		case ('/'):
			printf("x / y = %d\n", div);
			return div;
			break;
		case ('*'):
			printf("x * y = %d\n", mul);
			return mul;
			break;
		case ('-'):
			printf("x - y = %d\n", div);
			return sub;
			break;
		case ('e'):
			return 0;
			break;
		default:
			printf("Sorry luv, didnt get it\n");
		}
	};
};
	int main() {
		int first_var;
		int second_var;
		char oper;
		printf("your op: +, - , /, * or [e] to exit: \n");
		std::cin >> oper;
		if (oper != 'e') {
			printf("First var: \n");
			std::cin >> first_var;
			printf("Second var: \n");
			std::cin >> second_var;
			Calculator calc;
			calc.calculate(first_var, second_var, oper);
		}
		return 0;
	};
