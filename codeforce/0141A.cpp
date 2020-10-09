#include <bits/stdc++.h>
using namespace std;
const int maxn = 25;
int arr[maxn] = {0};
int main(){
	string A,B,C; cin >> A >> B >> C;
	for(int i = 0; i < A.size(); i++)
		arr[A[i] - 'A'] ++;
	for(int i = 0; i < B.size(); i++)
		arr[B[i]-'A'] ++;
	
	for(int i = 0; i < C.size(); i++)
		arr[C[i] - 'A'] --;

	for(int i = 0; i < maxn; i++){
		if(arr[i] != 0){
			cout << "NO"<< endl;
			return 0;
		}
	}
	cout << "YES" << endl;
}
