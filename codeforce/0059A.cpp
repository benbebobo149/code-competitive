#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;int cnt = 0; cin >> a;
	for(int i = 0; i < a.size(); i++)
		if(a[i] >= 'a') cnt++;
	if(cnt * 2 >= a.size()){
		for(int i = 0; i < a.size(); i++){
			if(a[i] < 'a') a[i] = a[i] - 'A' + 'a';
		}
	}
	else{
		for(int i = 0; i < a.size(); i++){
			if( a[i] >= 'a') a[i] = a[i] - 'a' + 'A';
		}
	}  
	cout << a << endl;
}
