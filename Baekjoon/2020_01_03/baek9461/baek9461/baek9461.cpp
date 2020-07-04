
#include <iostream>
using namespace std;
int main(void) {

	int test_case;
	cin >> test_case;
	long long* answer = new long long[test_case];

	for (int i = 0; i < test_case; i++) {

		int trial;
		cin >> trial;
		long long* memo = new long long[trial+12];
		memo[0] = 1;memo[1] = 1;
		memo[2] = 1; memo[3] = 1; 
		memo[4] = 2; memo[5] = 2;

		for (int j = 6; j < trial + 1; j++) {
			memo[j] = memo[j - 1] + memo[j - 5];
		}
		answer[i] = memo[trial];
	}
	for (int i = 0; i < test_case; i++) {
		cout << answer[i] << endl;
	}


	return 0;
}