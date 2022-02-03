#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	
	auto sum = 0;
	if (n <= 60 + k) {
		sum = n * 1500;
	}
	else {
		sum = (60 + k) * 1500;
		sum += (n - 60 - k) * 3000;
	}

	cout << sum;

	return 0;
}