def f1(a):
    a1 = [i for i in a if str(i).isalpha()]
    a2 = [i for i in a1 if len(i) == 1]
    return a2

def f(a):
    if len(a) < 2:
        return a[0] if 97 <= ord(a[0]) <= 122 else ''
    if 97 <= ord(a[0]) <= 122: return a[0] + f(a[1:])
    return f(a[1:])

a = ['kjlhg', 99, '', 124, 1, 'h', 'G', 'L', 'k', 'y', 'RR', 'w.']
print(*f(f1(a)))


    

        
            
        
