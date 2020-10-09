#include <bits/stdc++.h>
using namespace std;
const int maxn = 100 + 1;
int arr[maxn];
int main(){
	int N; cin >> N;
	for(int i = 1; i <= N; i++){
		int tmp; cin >> tmp;
		arr[tmp] = i;
	}	

	for(int i = 1; i <= N; i++)
		cout << arr[i] << " ";
	cout << endl;
}
