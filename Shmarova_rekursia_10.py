'''
Кого больше четных или нечетных эл-тов в списке?
'''
def chet(list_,ch = 0,nech = 0):
    s = '0123456789'
    list_ = [list_[i] for i in range(len(list_)) if s.find(list_[i])!= -1]
    print(list_)
    if len(list_) != 0 and int(list_[0]) % 2 == 0:
        ch = ch + 1 
        return (chet(list_[1:],ch,nech))
    elif len(list_) != 0:
        print(nech, '   ', ch)
        nech = nech + 1
        return (chet(list_[1:],ch,nech))
    else:
        return ch > nech

s = list(input('Список введите (строчкой, потому что так удобнее): \n'))
if chet(s):
    print('четных')
else:
    print('нечетных')

'''
Тест:
>>> 1123 цйвф53ььеada1
<<< нечетных
'''
