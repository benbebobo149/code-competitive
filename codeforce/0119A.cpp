#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;	cin >> a >> b >> c;
	int cnt = 0;
	while(c > 0){
		if(cnt % 2 == 0){
			cnt ++;
			c-= gcd(a,c);
		}
		else{
			cnt ++;
			c-=gcd(b,c);
		}
	}

	if(cnt % 2 == 0)
		cout << 1 << endl;
	else
		cout << 0 << endl; 
}
