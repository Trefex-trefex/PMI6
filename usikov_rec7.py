def deli(s):
    a = [i for i in s if i in '()']
    s1 = ''.join(i for i in a)
    return s1

def f(s, k1, k2):
    if len(s) < 2:
        if s[0] == '(': k1 += 1
        else: k2 += 1
        return k1==k2
    if s[0] == '(': return f(s[1:], k1+1, k2)
    return f(s[1:], k1, k2+1)

s = input('введите строку => ')
ans = f(deli(s),0,0)
print('это '+str(ans)+' форма скобок')
        
    



