f = open('Input.txt', 'w')

n = int(input('n = '))

#записываем в файл n строк от пользователя
for i in range(n):
    s = input('s = ')
    f.write(s+'\n')
f.close()

#выводим строки без цифр
for s in open('Input.txt'):
    if all( not i.isdigit() for i in s):
        print(s)


