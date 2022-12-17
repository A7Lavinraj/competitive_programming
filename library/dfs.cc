template<typename T>
void dfs(T source, vector<T> graph[], vector<bool> visited) {
    visited[source] = true;
    for (T i : graph[source]) {
        if (!vis[child]) {
            dfs(child, graph, visited);
        }
    }
}
