#include <bits/stdc++.h>
using namespace std;

template <typename T>
void bfs(T source, vector<T> graph[], vector<bool> visited) {
    queue<T> que;
    que.push(source);
    visited[source] = true;

    while(!que.empty()) {
        T current_vertex = que.front();
        que.pop();
        for (T child : graph[current_vertex]) {
            if (!visited[child]) {
                que.push(child);
                visited[child] = true;
            }
        }
    }
}
