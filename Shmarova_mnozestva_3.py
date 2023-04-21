'''
Дана строка, содержащая символы латинского алфавита, пробелы и цифры
(вводится пользователем). Найдите символы, входящие в строку не менее двух раз
'''

s = input('Vvedite str: ')

s_set = set(s)
new = set()
for elem in s_set:
    if s.count(elem) > 1:
        new.add(elem)
print(new)
