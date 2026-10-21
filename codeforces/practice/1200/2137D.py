import sys
from collections import defaultdict

input = sys.stdin.readline

def ii(): return int(input())
def li(): return list(map(int, input().split()))
def si(): return input().strip()

MOD = 10**9 + 7

def solve():
    n = ii()
    b = li()

    count_b = defaultdict(int)
    for num in b: count_b[num] += 1

    for val, cnt in count_b.items():
        if cnt % val != 0: 
            print(-1)
            return

    elements_a = defaultdict(int) # signifies we haven't run into this value yet
    a = [0] * n # values to output
    new_val = 1

    for i in range(n):
        # b[i] hasn't been seen yet --> use new number, and update new number
        # b[i] has been seen, but no need to update value yet
        if (elements_a[b[i]] == -1) or (count_b[b[i]] % b[i] == 0):
            elements_a[b[i]] = new_val
            new_val += 1
            
        count_b[b[i]] -= 1
        assert count_b[b[i]] != -1
        a[i] = elements_a[b[i]]

    for num in a:
        print(num, end=" ")
    print()

'''
6
1 2 2 3 3 3
->
4 5 5 6 6 6

6
2 1 2 3 3 3
2 1 2 3 3 3

333333
111222

Have an array counting how much each number shows up

The contents (not order!) of b determine the contents of a.

if b[i] == 1, then make a[i] a new number. 
if b[i] == 2, then make 

let b_copy = b;
sort b_copy;
for b[i] == n, 
    if count of n in b[i] isn't divisible by n, return -1
    "each n-sized group of b[i] == n, give new value"

somehow, return b[i]. 

Let's use a hashmap, and just ensure each element's count has proper divisibility. 
We use this hashmap to determine when to *use a new number* when constructing a[].
If we're not using using a new number, we need to use the old number. 

We can have a seperate array "a_elements" and "new_num". 
a_elements := kv of {b[i] : old_num}

'''



t = ii()
for _ in range(t):
    solve()