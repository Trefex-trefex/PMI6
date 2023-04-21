'''
Проверить, есть ли в файле строки, состоящие только из строчных латинских букв.
Проверку описать с помощью with/as
'''

with open('Input2.txt.','r') as fp:
    s = fp.readlines()
    flag = False
    i = 0
    while i < len(s) and not(flag):
        flag_2 = True
        j = 0
        while j < len(s[i]) and flag_2:
            if  97 <= ord(s[i][j]) <= 122:
                flag_2 = False
            j += 1
        if not(flag_2):
            flag = True
        i += 1
    print(flag)
