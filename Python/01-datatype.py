# numeric
# get type of variable a
a = 100
print("type of a is ", type(a))

# get type of variable b
b = False
print("type of b is ", type(b))

# get type of variable c
c = 9.99
print("type of c is ", type(c))

# get type of variable d
d = 10+3j
print("type of d is ", type(d))

# sequence
str1 = "hello"
print("type of str1 is ", type(str1))
# print(str1[1:3])
# str1[0]='H'   #invalid
# print(str1)

list1 = [1, 'abc', 1.23, False]
print("type of list1 is ", type(list1))
# print(list1[2:])
# print(list1*2)
# list1[0]=3    #valid
# print(list1)

tup1 = (123, [10-2j, True, 1.11], 'hi', (1, 'a', False))
print("type of tup1 is ", type(tup1))
# tup1[2]='hello'   #invalid
# print(tup1)

dic1 = {2: 'one', 3: 'two', 1: "three"}
print('type of dic1 is ', type(dic1))
# print(dic1[1])
# print(dic1.keys())
# print(dic1.values())

set1 = {1, "set", 1.01, False}
print("type of set1 is ", type(set1))

# casting
i1 = int("1000", 2)
print(i1)

# operators
print(5/2)
print(5//2)
print(5 % 2)
print(5*2)
print(5**2)
print(5 << 2)   # 1001 --> 100100
print(5 >> 2)   # 1001 --> 0010
print(pow(5, 2))
