def f(s):
    '''
    функция принимает строку и выдает количество чисел начинающихся на каждую цифру
    '''
    a = [i for i in s.split(' ') if i !='']
    b = [0]*10
    for i in range(len(a)):
        c = a[i]
        b[int(c[0])] += 1
    print(s)
    no = []
    for i in range(10):
        if b[i] != 0:
            print('%d: %d' % (i, b[i]))
        else: no.append(i)
    print('Not:', *no)
            
        
        
a = '103 25 9   1178   23  45 99'
f(a)
