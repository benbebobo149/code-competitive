#include <bits/stdc++.h>
using namespace std;
const int maxn = 100 + 1;
int arr[maxn];
int main(){
	int N; cin >> N;
	for(int i = 0; i < N; i++)
		cin >> arr[i];

	int minN = 101,minPo,maxN = -1,maxPo;
	for(int i = 0; i < N; i++){
		if(arr[i] <= minN){
			minPo = i;
			minN = arr[i];
		}
	
		if(arr[i] > maxN){
			maxPo = i;
			maxN = arr[i];
		}
	}
	
	cout << (maxPo - 0) + (N-1-minPo) - (maxPo > minPo) << endl;
}
