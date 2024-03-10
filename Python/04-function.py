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
