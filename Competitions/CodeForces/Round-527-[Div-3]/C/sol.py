n = int(input())
d = {}
ma = ""
mi = "x"*(n+2)
for i in range(2*n-2):
    s = input()
    if len(s) > len(ma):
        ma = s;
    if len(s) < len(mi):
        mi = s;
    d[i+1] = s;

result = mi + ma;
result = ma + mi;

print("Result: ", result)
st = set()
for key in d:
    if result.find(d[key]) == 0 and d[key] not in st:
        d[key] = "P";
        st.add(d[key])
    # elif len(result) - result.rfind(d[key]) == len(d[key]):
        # d[key] = "S";
    else:
        d[key] = "S";
        st.add(d[key])

print("".join(d[x] for x in d))
