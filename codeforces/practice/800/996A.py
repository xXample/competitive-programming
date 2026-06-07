import sys
input = sys.stdin.readline

n = int(input())

total = 0
bills = [100, 20, 10, 5, 1]

for bill in bills:
    num_bills = n // bill
    n -= num_bills * bill
    total += num_bills
print(total)

