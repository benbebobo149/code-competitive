#include <bits/stdc++.h>
using namespace std;
int main(){
	vector <int> vc;
	int N,M; cin >> N >> M;
	for(int i = N + 1; i <= M; i++)
	{
		int state = 0;
		for(int j = 2; j * j <= i; j++)
		{
			if( i % j == 0){
				state = 1;
				break;
			}
		}
		if(state == 0)
			vc.push_back(i);
	}
	
	if(vc.size() == 1 and vc[0] == M)
		cout << "YES" << endl;
	else cout << "NO" <<endl;
}
