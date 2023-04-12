def short_long_word(s):
    '''
    функция ищет последнее самое короткое слово и первое самое длинное
    '''
    a = [i for i in s.split(' ') if i != '']
    b = []
    for i in range(len(a)):
        if all(j.isalpha() for j in a[i]): b.append(a[i])
        else: b.append(a[i][:-1])

    b = sorted(b, key = len)
    mn = ''
    mx = ''
    for i in range(len(a)-1):
        if len(b[i]) == len(b[0]):
            mn = b[i]
        if len(b[i]) < len(b[i+1]):
            mx = b[i+1]
    return mn, mx


a = 'Meet my family. There are five of us my parents, my elder brother, my baby sister and me. First, meet my mum and dad, Jane and Michael'
print('минимальное: %s, максимальное: %s' % short_long_word(a))
            
        
        
        
