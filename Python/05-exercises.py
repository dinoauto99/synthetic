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
