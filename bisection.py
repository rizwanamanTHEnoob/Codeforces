import math
def func (x):
    return 3*x-cos(x)-1;
def bisection(a,b):
    if func(a)*func(b)>=0:
        print("Wrong Value")
        return
    for i in range(1,6):
        c=(a+b)/2
        if func(c)==0:
            break
        if func(a)*func(c)<0:
            b=c
        else:
            a=c
    
    print(c)

a=0
b=1
bisection(a,b)