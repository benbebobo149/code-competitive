#include <bits/stdc++.h>
using namespace std;
int n = 3;
vector<vector<pair<int,int>>> graph(n);

void sort_vector(){
    vector<int> l;
    l.push_back(3);
    l.push_back(1);
    l.push_back(2);
    for(auto i: l) cout << i << " ";
    cout << endl;
    sort(l.begin(), l.end(), greater<int>());
    for(auto i: l) cout << i << " ";
    cout << endl;
}





int main(){
    graph[1].push_back({2,2});
    graph[2].push_back({1,2});
    // for(auto i: graph[1]){
    //     cout << i.first << " " << i.second << endl;
    // }

    queue <pair<int,int>> q;
    // for(auto i: graph[1]){
    //     q.push({i.first, i.second});
    // }

    // while(!q.empty()){
    //     cout << q.front().first << " " << q.front().second << endl;
    //     q.pop();
    // }
    sort_vector();
}


vector<int> dfs(int start_node){
    stack<pair<int,int>> st;
    vector<int> l(n);
    for(int i = 0; i < n; i++) l[i] = -1;
    st.push({start_node, 0});
    l[start_node] = 0;

    while(st.size()!=0){
        pair <int, int> now_node = st.top();
        for(auto i: graph[now_node.first]){
            if(l[i.first] == -1){
                pair<int, int> p = {i.first, i.second + now_node.second};
                st.push(p);
                l[p.first] = p.second;
            }
        }
        st.pop();
    }
    return l;
}


vector<int> bfs(int start_node){
    queue<pair<int, int>> q;
    vector<int> l(n,-1);
    q.push({start_node, 0});
    l[start_node] = 0;

    while(!q.empty()){
        pair <int, int> now_node = q.front();
        q.pop();
        for(auto i: graph[now_node.first]){
            if(l[i.first] == -1){
                q.push({i.first, i.second + now_node.second});
                l[i.first] = i.second + now_node.second;
            }
        }
    }

    return l;
}


