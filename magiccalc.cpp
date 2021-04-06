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
		cout <<"What op would u like: add(+), sub(-), div(/), mul(*), [e]xit? ";
		cin >> op;
		switch (op) {
		case'+':
			cout << "First var: ";
			cin >> x;
			cout << "Second var: ";
			cin >> y;
			cout << x << " + " << y << " = " << add(x, y) << "\n";
			break;
		case'-':
			cout << "First var: ";
			cin >> x;
			cout << "Second var: ";
			cin >> y;
			cout << x << " - " << y << " = " << subtract(x, y) << "\n";
			break;
		case'/':
			cout << "First var: ";
			cin >> x;
			cout << "Second var: ";
			cin >> y;
			cout << x << " / " << y << " = " << divide(x, y) << "\n";
			break;
		case '*':
			cout << "First var: ";
			cin >> x;
			cout << "Second var: ";
			cin >> y;
			cout << x << " * " << y << " = " << multiply(x, y) << "\n";
			break;
		case 'e':
			return 0;
		default:
			cout << "Sorry, try again" << "\n";
		}
		
	}
	return 0;
}
