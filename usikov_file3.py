#есть ли строки у которых начало и конец совпадают
with open('ex3.txt') as f:

    flag = False
    for s in f:
        if s[-1] == '\n':
            s = s[:-1]
            if s[0]==s[-1]:
                flag = True
        else:
            if s[0]==s[-1]:
                flag = True
            

    if flag:
        print('такие строки есть')
    else:
        print('таких строк нет')
