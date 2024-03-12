'''
built-in function: print(), int(), len(), sum(),...
function defined in built-in modules
user-defined fucntion
'''


def testFunc(arg):
    print('id of the arguemnt is', id(arg))
    return


text = 'hello'
testFunc(text)
testFunc(123)


def printInfo(name, age=20):
    print('name:', name, '\tage:', age)
    return


printInfo('John', age=25)
printInfo(name='Tom')


def add(x, y):
    z = x+y
    print('x= {} \t y= {} \t x+y= {}'.format(x, y, z))
    return


add(1, 2)


def adds(*args):
    s = 0
    for n in args:
        s += n
    return s


print(adds(1, 2, 3, 4))


def addr(**kwargs):
    for k, v in kwargs.items():
        print('{} {}'.format(k, v))
    return


addr(Name="John", Age=20, City="LA")

mark = 10


def variableScope():
    # mark = 9
    globals()['mark'] += 10
    print('mark:', mark)


variableScope()
xcbcvb