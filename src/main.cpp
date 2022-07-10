#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < (n--)) {
		string x;
		cin >> x;

		transform(x.begin(), x.end(), x.begin(), [](unsigned char c) { return tolower(c); });

		cout << x << '\n';
	}

	return 0;
}