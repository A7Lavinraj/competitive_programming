template<typename T>
void dfs(T source, vector<T> graph[], vector<bool> visited) {
    visited[source] = true;
    for (T child : graph[source]) {
        if (!visited[child]) {
            dfs(child, graph, visited);
        }
    }
}
