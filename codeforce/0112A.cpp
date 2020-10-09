#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b; cin >> a >> b;
	for(int i = 0; i < a.size(); i++){
		if(a[i] >= 'a'){
			a[i] = a[i] - 'a' + 'A';
		}
		if(b[i] >= 'a'){
			b[i] = b[i] - 'a' + 'A';
		}
		
	}

	if( a == b) cout << 0 << endl;
	else if( a > b) cout << 1 << endl;
	else cout << -1 << endl; 
}
