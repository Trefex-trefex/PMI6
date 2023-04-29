n = int(input('Введите число n: '))

digits = {i for i in range(2, n+1)}
prost = set()
d = 0
p = 0
t = 2

while digits != set():
    while d == p and digits != set():
        prost.add(t)
        digits = {i for i in digits if i%t!=0}
        t = min(digits) if digits != set() else t
        d = (t // 10) % 10
    if len(prost) == 4:
        print(*prost)
    prost = set()
    p = (p+1)%10
    
    
