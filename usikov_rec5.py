def fib(p):
    if p < 2:
        return p
    else:
        return fib(p-2) + fib(p-1)

def srch(m):
    i = 0
    while fib(i) <= m:
        i += 1
    return fib(i), i

m = 55
n = 10
for i in range(n+1):
    print(fib(i))

f, i = srch(m)
print('наибольшее число большее %d => %d от номера %d' % (m, f, i))
