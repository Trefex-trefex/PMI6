def f2(n):
    if n == 1: return 64
    else: return f2(n-1)/2

def f3(n):
    if n == 1: return 1
    else: return f3(n-1) + 2 * f3(n-1)**2 + 1

print(f2(4))
print(f3(4))
