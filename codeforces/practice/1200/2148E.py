import sys

input = sys.stdin.readline

def ii(): return int(input())
def li(): return list(map(int, input().split()))
def si(): return input().strip()

MOD = 10**9 + 7

def solve():
    n, k = li()
    a = li()

    cnt = [0] * (n+1)
    for i in a:
        cnt[i] += 1
    for i in cnt:
        if i % k != 0:
            print(0)
            return

    ans = 0
    for l in range(1, n+1):
        cnt_subarray = [0] * (n+1)
        for r in range(l, n+1):
            val = a[r-1]
            cnt_subarray[val] += 1
            if (cnt[val] < cnt_subarray[val]*k):
                ans += r - l
                break
            elif (r == n):
                ans += r - l + 1

    print(ans)
    pass

t = ii()
for _ in range(t):
    solve()