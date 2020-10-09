#include <bits/stdc++.h>
using namespace std;
int main(){
	int N,tram = 0,ans = 0; cin >> N;
	for(int i = 0; i < N; i++){
		int a,b;
		cin >> a >> b;
		tram += b;
		tram -= a;
		ans = max(ans,tram);
	}
	cout << ans << endl;
}
