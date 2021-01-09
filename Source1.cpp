#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
int comp(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}
int main(void)
{
	int t;
	cin >> t;
	long int candy[3] = { 0,0,0 };
	long int A, B, C;
	for (int i = 0; i < t; i++) {
		cin >> candy[0] >> candy[1] >> candy[2];
		//排r,g,b
		qsort(candy, 3, sizeof(long int),comp);
		//cout << candy[0] << " ," << candy[1] << " ," << candy[2];
		A = candy[0]; B = candy[1]; C = candy[2];
		
		if (B< ((B+ C-A) / 2)) {     //a全部跟c配，c在跟b
			cout << A + B << endl;
		}
		else if (C == A) {    //a跟c配完之後，c就沒了 (無法再跟b配)
			cout << A << endl;
		}
		else{   
			cout << A + (B + C - A) / 2 << endl;
		}

	}
}