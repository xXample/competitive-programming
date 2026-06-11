import sys

input = sys.stdin.readline

def ii(): return int(input())
def li(): return list(map(int, input().split()))
def si(): return input().strip()

MOD = 10**9 + 7    

def solve():
    n = ii()
    board = [si(), si()]
    dp = [float("INF") for _ in range(n+1)]
    dp[0] = 0
    for i in range(n):
        dp[i+1] = min(dp[i+1], dp[i] + int(board[0][i] != board[1][i]))
        if i >= n-1: continue
        dp[i+2] = min(dp[i+2], dp[i] + int(board[0][i] != board[0][i+1]) + int(board[1][i] != board[1][i+1]))
    print(dp[n])


t = ii()
for _ in range(t):
    solve()