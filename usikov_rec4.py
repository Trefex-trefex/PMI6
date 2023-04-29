def sm(x):
    if x > 0:
        return sm(x//10) + x%10
    else:
        return x

print(sm(1345))
        
