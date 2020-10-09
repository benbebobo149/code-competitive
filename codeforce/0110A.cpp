#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	ll N, ans = 0; cin >> N;
	
	while(N){
		if( N % 10 == 7 or N % 10 == 4)
			ans ++;
		N /= 10;
	}	 

	if( ans == 4 or  ans == 7)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}
