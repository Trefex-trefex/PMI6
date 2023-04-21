'''
Дана строка, содержащая символы латинского алфавита, пробелы и цифры
(вводится пользователем). Найдите наибольшее количество символов вида «1*с»,
идущих подряд (* — любой символ).
'''

s = input('Vvedite strochku: ')
s = s.split()
mn = set()

print(s)
for elem in s:
    if len(s) < 1e+6:
        i = 0
        nomer = 0
        chet = 0
        pamyat = []
        while i < len(s)-2:
            if s[i] == '1' and s[i+2] == 'c':
                if i > 2 and all([(s[i-1] != '1' and s[i+1] != 'c'),(s[i-3] != '1' and s[i-1] != 'c')]):
                    nomer = i - 1
                    pamyat.append(chet)
                    chet = 0
                if nomer == i or nomer+1 == i or nomer+2 == i:
                    chet += 1
                    nomer = i + 1
            i += 1
        pamyat.append(chet)
        print(max(pamyat))


