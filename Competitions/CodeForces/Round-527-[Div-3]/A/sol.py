l = "abcdefghijklmnopqrstuvwxyz"
d = {}
for i in range(len(l)):
    d[i+1] = l[i];

t = int(input())
for i  in range(t):
    n, s = map(int, input().split())
    q = n // s;
    print(d[1]*(q+n%s), end="")
    for j in range(2, s+1):
        print(d[j]*(q), end="")

    print()

