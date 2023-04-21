def palindrom(str_):
    a = str_.replace(' ', '').lower() # убираем пробелы и делаем все буквы в нижнем регистре
    flag = True
    for i in range(len(a)//2):
        if a[i] != a[len(a)-1-i]:
            flag = False
    return flag

# Тест

str_ = 'qwertytrewq'
print(palindrom(str_))

            
