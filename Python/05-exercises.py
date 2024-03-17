import re
import datetime as dt
from mymodule import rest as rr
import mymodule as mm
car = {
    'brand': 'ford',
    'model': 'mustag',
    'year': 2010
}
car['color'] = 'red'
car['year'] = 2020
print(car.get('model'))
print(car.get('year'))
print(car.get('color'))


class mynumbers:
    def __iter__(self):
        self.a = 1
        return self

    def __next__(self):
        if self.a < 10:
            x = self.a
            self.a += 1
            return x
        else:
            raise StopIteration


myclass = mynumbers()
myiter = iter(myclass)

for x in myiter:
    print(x)

x = 200


def testscope():
    global x
    x = 300
    print(x)


testscope()
print(x)


mm.greet()

print(mm.mydict['year'])

for x in dir(mm):
    print(x)

rr()

print(dt.datetime.now())

orgStr = 'this is 242th street, NY town, code 3456, welcome'

m = re.findall('/d+', orgStr)
for x in m:
    print(x)

abc = 123
try:
    print(abc)
except:
    print('that variable is not defined yet')
else:
    print('nothing went wrong')
finally:
    print('end try-except')

try:
    f = open('G:/Workspace/synthetic/Python/demofile.txt', 'w')
    try:
        f.write("this text is wrote by Python")
        print('write successfully')
    except:
        print("can not write to file")
    finally:
        f.close()
except:
    print("can not open file")
str1 = "abc"
try:
    if type(str1) is not int:
        raise TypeError("can not convert to int")
except TypeError as e:
    print("exception error:", str(e))

a = 123
print("the number is {:.2f}".format(a))
