import sys

input = sys.stdin.readline

def ii(): return int(input())
def li(): return list(map(int, input().split()))
def si(): return input().strip()

MOD = 998244353

def get0(x: int):
    return 1 + (((x-3) // 4) + 1 if x >= 3 else 0)
def get1(x: int):
    return ((x-1) // 4) + 1 if x >= 1 else 0

def solve():
    n, x = li()

    l0 = get0(x-1) % MOD
    r0 = (get0(n) - l0) % MOD
    ans = l0*r0 % MOD

    l1 = get1(x-1) % MOD
    r1 = (get1(n) - l1) % MOD
    ans += l1*r1 % MOD

    ans %= MOD
    print(ans)

t = ii()
for _ in range(t):
    solve()