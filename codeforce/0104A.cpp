#include <bits/stdc++.h>
using namespace std;
int main(){
 	int N; cin >> N;
	if( N <= 10 ) cout << 0 << endl;
	else if( N <= 19) cout << 4 << endl;
	else if( N == 20 ) cout << 15 << endl;
	else if( N == 21 ) cout << 4 << endl;
	else cout << 0 << endl; 
}
