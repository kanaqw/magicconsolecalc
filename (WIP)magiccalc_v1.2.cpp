#include <cstdio>
#include <iostream>
#include <string>

struct Calculator {
	int get_firstVar(int a) {
		printf("First var: \n");
		std::cin >> a;
		return a;
	}
	int get_secondVar(int b) {
		printf("Second var: \n");
		std::cin >> b;
		return b;
	}
	int get_oper(char c) {
		printf("your op: +, - , / or *: \n");
		std::cin >> c;
		return c;
	}
	int calcres(int a, int b, char op) {
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
			printf("x - y = %d\n", sub);
			return sub;
			break;
		default:
			printf("Sorry luv, didnt get it\n");
		}
	}

	int calcresult = 0;
};
int main() {
	int first_var=0;
	int second_var=0;
	char oper='c';
	Calculator calc;
	Calculator*calcptr = &calc;
	calcptr->get_firstVar(first_var);
	calcptr->get_secondVar(second_var);
	calcptr->get_oper(oper);
	printf("%d\n", first_var);
	printf("%d\n", second_var);
	printf("%c\n", oper);

	calcptr->calcres(first_var, second_var, oper);
	return 0;
};
