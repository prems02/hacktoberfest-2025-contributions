#include <bits/stdc++.h>
using namespace std;

struct Cell {
    int x, y, dist;
};

bool isValid(int x, int y, int n, int m, vector<vector<int>> &maze, vector<vector<bool>> &visited) {
    return (x >= 0 && y >= 0 && x < n && y < m && maze[x][y] == 1 && !visited[x][y]);
}

int shortestPath(vector<vector<int>> &maze, pair<int, int> src, pair<int, int> dest) {
    int n = maze.size(), m = maze[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    queue<Cell> q;
    q.push({src.first, src.second, 0});
    visited[src.first][src.second] = true;

    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};

    while (!q.empty()) {
        Cell curr = q.front();
        q.pop();

        if (curr.x == dest.first && curr.y == dest.second)
            return curr.dist;

        for (int i = 0; i < 4; i++) {
            int newX = curr.x + dx[i];
            int newY = curr.y + dy[i];
            if (isValid(newX, newY, n, m, maze, visited)) {
                visited[newX][newY] = true;
                q.push({newX, newY, curr.dist + 1});
            }
        }
    }
    return -1;
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 1, 1, 1},
        {1, 1, 1, 0, 1},
        {0, 0, 1, 1, 1},
        {1, 1, 1, 0, 1}
    };

    pair<int, int> src = {0, 0};
    pair<int, int> dest = {3, 4};

    int distance = shortestPath(maze, src, dest);

    if (distance != -1)
        cout << "Shortest Path Length: " << distance << endl;
    else
        cout << "No path found!" << endl;

    return 0;
}
