#include <iostream>

int multiply(int x, int y)
{
	return x * y;

}

int divide(int x, int y)
{
	return x / y;
}
int add(int x, int y)
{
	return x + y;
}
int subtract(int x, int y)
{
	return x - y;
}

using namespace std;

int main() {
	char op = 'c';
	int x, y;
	while (op != 'e')
	{
		printf("What op would u like: add(+), sub(-), div(/), mul(*), [e]xit? ");
		cin >> op;
		switch (op) {
		case'+':
			cout << "First var: ";
			cin >> x;
			cout << "Second var: ";
			cin >> y;
			printf("x + y = %d\n", add(x, y));
			break;
		case'-':
			cout << "First var: ";
			cin >> x;
			cout << "Second var: ";
			cin >> y;
			printf("x - y = %d\n", subtract(x,y));
			break;
		case'/':
			cout << "First var: ";
			cin >> x;
			cout << "Second var: ";
			cin >> y;
			printf("x / y = %d\n", divide(x, y));
			break;
		case '*':
			cout << "First var: ";
			cin >> x;
			cout << "Second var: ";
			cin >> y;
			printf("x * y = %d\n", multiply(x, y));
			break;
		case 'e':
			return 0;
		default:
			cout << "Sorry, try again" << "\n";
		}
		
	}
	return 0;
}
