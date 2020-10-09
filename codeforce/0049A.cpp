#include <bits/stdc++.h>
using namespace std;
char arr[12] = {'A','E', 'I', 'O','U', 'Y', 'a' ,'e' ,'i','o','u'};
int main(){
	string N;
	getline(cin,N);
 	for(int i = N.size() - 1; i >= 0; i--){
		if((N[i] >= 'A' and N[i] <= 'Z') or( N[i] >= 'a' and N[i] <= 'z' )){
			for(int j = 0; j < 12; j++)
				if(N[i] == arr[j]){
					cout << "YES" << endl;
					return 0;
				}
				cout << "NO" << endl;
				return 0;
		}
	} 


}
