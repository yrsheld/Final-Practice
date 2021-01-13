#include<iostream>
using namespace std;

int main()
{
	int t,A,B,C,D;
	int a[100010] = {0};
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> A >> B >> C >> D;
		//cout << A << B << C << D << endl;
		//int a[100010] = { 0 };
		int ans = 0;
		for (int j = A; j <= B; j++) {
			a[j + B] += 1;
			a[j + C + 1] -= 1;
		}
		for (int j = 1; j <= B + C; j++) {
			a[j] += a[j - 1];
		}
		for (int j = C; j <= B + C; j++) {
			int m = j - 1 < D ? j - 1 : D;
			ans += a[j] * (m - C + 1);
		}
		cout << ans << endl;
		for (int j = 0; j <= B + C + 2; j++) {
			a[j] = 0;
		}
	}
}


