import  math

n, k = map(int, input().split())

result = []

if n % 2 != 0:
    result.append(1)
    n -= 1;

index = 0;
result.append(n)

diff = k - len(result)

flag = True  if diff >= 0 else False
while diff > 0:
    if not result[index] <= 2:
        x = result[index]//2
        result[index] = x
        result.append(x)
        diff -= 1
        flag = True
    else:
        index += 1
        if (index >= len(result)):
            flag = False
            break

if flag:
    print("YES")
    print(' '.join(map(str, result)))
else:
    print("NO")
