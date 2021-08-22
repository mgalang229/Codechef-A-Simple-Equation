#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, a, b, c;
		cin >> n >> a >> b >> c;
		long long solutions = 0;
		for (int i = 0; i <= a; i++) {
			for (int j = 0; j <= b; j++) {
				// calculate the difference of 'n' and the sum of 'a' and 'b'
				long long diff = n - i - j;
				if (diff < 0) {
					// break the loop if 'diff' is less than 0 (we cannot add 'c' anymore)
					break;
				}
				// increment 'solutions' because this can expressed as 'a' + 'b' + 0 (which is counted)
				solutions++;
				// find the minimum value between 'c' and 'diff' and add it to 'solutions'
				solutions += min(c, diff);
			}
		}
		cout << solutions << '\n';
	}
	return 0;
}
