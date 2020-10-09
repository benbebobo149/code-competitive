#include <bits/stdc++.h>
using namespace std;
int main(){
	int N, M; cin >> N >> M;
	if( N > M ) swap(N,M);
	cout << N / 2 * M + N % 2 * (M / 2) << endl;
}
