/*
link : https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/bfs/
Problem
You have been given a Tree consisting of N nodes. A tree is a fully-connected graph consisting of N nodes and  edges.
The nodes in this tree are indexed from 1 to N. Consider node indexed 1 to be the root node of this tree. 
The root node lies at level one in the tree. You shall be given the tree and a single integer x . You need to find out the number of nodes lying on level x.

Input Format

The first line consists of a single integer N denoting the number of nodes in the tree.
Each of the next  lines consists of 2 integers a and b denoting an undirected edge between node a and node b. The next line consists of a single integer x.

Output Format

You need to print a single integers denoting the number of nodes on level x.

*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int bfs(vector<vector<int>> v, int nodes, int x) {
    vector<int> levels(nodes + 1, 0);
    queue<int> q;
    vector<bool> visited(nodes + 1, false);
    int node;
    
    q.push(1);
    levels[1] = 1;
    visited[1] = true;
    
    while (!q.empty()) {
        node = q.front();
        q.pop();
        
        // Retrieve neighbors
        for (int i = 0; i < v[node].size(); i++) {
            if (visited[v[node][i]] == false) {
                q.push(v[node][i]);
                levels[v[node][i]] = levels[node] + 1;
                visited[v[node][i]] = true;
            }
        }
    }
    
    int count = 0;
    for (int i = 1; i < nodes + 1; i++) {
        if (levels[i] == x) count += 1;    
    }
    
    return count;
}

int main() {
    bool run = true;
	int nodes, edge1, edge2, x;
	
	cin >> nodes;
	
	// pos 0 will be empty
	vector<vector<int>> v(nodes + 1);
	
	for (int i = 0; i < nodes - 1; i++) {
		cin >> edge1;
		cin >> edge2;

		v[edge1].push_back(edge2);
		v[edge2].push_back(edge1);
	}
	cin >> x;
	cout << bfs(v, nodes, x);
}
