#файл, где все  двузначные  натуральные  числа,  делящиеся  на заданное число 𝑚
with open('ex5.txt', 'w') as f:
    m = int(input('m = '))
    for i in range(10,100):
        if i % m == 0:
            f.write(str(i)+'\n')

    

