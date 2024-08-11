from math import gcd
from collections import defaultdict

MOD = 10**9 + 7

def dfs(node, parent, current_gcd, graph, values, count):
    current_gcd = gcd(current_gcd, values[node - 1])  # Adjusting for 1-based index
    if current_gcd == 1:
        count[0] += 1

    for neighbor in graph[node]:
        if neighbor != parent:
            dfs(neighbor, node, current_gcd, graph, values, count)

def get_ans(N, M, two, A, edges):
    graph = defaultdict(list)
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)
    
    count = [0]  # Use a list to modify count inside dfs
    dfs(1, -1, 0, graph, A, count)  # Start DFS from node 1
    
    return count[0] % MOD

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    idx = 0
    
    N = int(data[idx])
    idx += 1
    
    M = int(data[idx])
    idx += 1
    
    two = int(data[idx])  # this value will always be 2
    idx += 1
    
    A = []
    for _ in range(N):
        A.append(int(data[idx]))
        idx += 1
    
    edges = []
    for _ in range(M):
        u = int(data[idx])
        v = int(data[idx + 1])
        edges.append((u, v))
        idx += 2
    
    result = get_ans(N, M, two, A, edges)
    print(result)

if __name__ == "_main_":
    main()