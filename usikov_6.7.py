'''
Дурацкая программа для вывода чисел от 0 до 30 словами
'''
def NumToStr(num):
    a = ['ноль','один','два','три','четыре','пять','шесть','семь','восемь','девять']
    return a[num]

def DecToStr(num):
    if num < 10:
        return NumToStr(num)
    elif num < 14:
        a = ['десять',NumToStr(num%10)+ 'надцать','двенадцать', NumToStr(num%10)+'надцать']
        return a[num-10]
    elif num < 20:
        s = NumToStr(num%10)
        return s[:-1]+'надцать'
    else:
        s1 = NumToStr(num//10%10)
        s2 = NumToStr(num%10) if num%10!=0 else ''
        return s1+'дцать '+s2

for i in range(31):
    print(DecToStr(i), end='; ')
    if i == 9 or i == 19 or i == 29:
        print()
        
