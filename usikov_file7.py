'''
файл с целыми числами. Найти в файле максимальное простое число и вывести его на экран
'''
#проверка на простоту 
def p(x):
    return len([i for i in range(1, int(x**0.5)+1) if x%i==0 and x>1]) == 1


f = open('ex7.txt', 'w+')
m = int(input('m = '))
for i in range(m):
    x = int(input('x = '))
    f.write(str(x)+' ')
f.seek(0)
a = [int(i) for i in f.readline().split()]
mx = -10000
for x in a:
    if p(x):
        mx = max(mx, x)

print(mx)
