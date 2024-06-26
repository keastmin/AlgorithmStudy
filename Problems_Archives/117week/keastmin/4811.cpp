#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long ull;

vector<vector<ull>> arr(31, vector<ull>(31, 0));

void dp() {
	for (int h = 0; h <= 30; h++) {
		for (int w = 0; w <= 30; w++) {
			if (h > w) continue;
			if (h == 0) arr[w][h] = 1;
			else arr[w][h] = arr[w - 1][h] + arr[w][h - 1];
		}
	}

}

int main() {
	dp();
	while (true) {
		int n;
		cin >> n;
		if (n == 0) break;

		cout << arr[n][n] << '\n';
	}

	return 0;
}
