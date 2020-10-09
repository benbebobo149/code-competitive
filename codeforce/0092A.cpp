#include <bits/stdc++.h>
using namespace std;
int main(){
	int N, M; cin >> N >> M;
	M = M % ((1 + N) * N / 2);
	for(int i = 1; i <= N; i++){
		if(M >= i) M-=i;
		else{
			cout << M << endl;
			return 0;
		}
	}
}
