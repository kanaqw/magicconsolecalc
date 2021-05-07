#include <cstdio>
#include <iostream>

template <typename T>
constexpr T sum(T x) {
	return x;
}

template <typename M>
constexpr M mul(M x) {
	return x;
}

template <typename T, typename... Args>
constexpr T sum(T x, Args...args) {
	return x + sum(args...);
}

template <typename M, typename... Args>
constexpr M mul (M x, Args... args) {
	return x * mul(args...);
}

int main() {
	
	int temp=1;
	int arr[10] = {};
	bool op;

	printf("1 for mul, 0 for sum: \n");
	std::cin >> op;
	printf("Now five elements: \n");
	if (op == 0) {
		for (size_t z = 0; z < 5; z++) {
			std::cin >> arr[z];
			temp += arr[z];
		}
		int n_temp = temp - 1;
		printf("The answer is %d", sum(n_temp));
	}
	else {
		for (size_t z = 0; z < 5; z++) {
			std::cin >> arr[z];
			temp *= arr[z];
		}
		printf("The answer is %d", mul(temp));

	}
}
