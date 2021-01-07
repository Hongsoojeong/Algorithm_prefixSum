#include <iostream>
using namespace std;
int main() {
	int X[] = {3,1,-2,6,7};
	int S[6];
	//O(n^2)
	for (int i = 0; i <= 5; i++) {
		S[i] = X[i];
		for (int j = 0; j < i; j++) {
			S[i] += X[j];
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << S[i] << " ";
	}

	cout << "\n";

	S[0] = X[0]; //O(n)
	for (int i = 1; i < 5; i++) {
		S[i] = S[i - 1] + X[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << S[i] << " ";
	}

	return 0;
}