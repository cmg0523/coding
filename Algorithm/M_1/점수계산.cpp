#include<iostream>

using namespace std;

int main() {
	int N,i,n[100],cnt=0,sum=0;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> n[i];

	}
	for (i = 0; i < N; i++) {
		if (n[i] == 1) {
			
				cnt++;
				sum += cnt;
			
		}
		else {
			cnt = 0;
		}
		
	}

	cout << sum;
	return 0;
}