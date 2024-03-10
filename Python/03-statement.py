# if statement
marks = int(input('input marks: '))
result = ''
if marks < 30:
    result = 'False'
elif marks > 75:
    result = 'Passed with distinction'
else:
    result = 'Passed'
print(result)

# match-case


def checkVowel(n):
    match n:
        case 'a':
            return 'character a'
        case 'b':
            return 'character b'
        case _:
            return 'other character'


print(checkVowel('a'))
print(checkVowel('b'))
print(checkVowel('c'))

# for statement
for x in range(0, 9):
    if x % 2 == 0:
        continue
    print(x)
    if x == 7:
        break

for let in 'python':
    if let == 'h':
        print('before pass')
        pass
        print('pass in for')
    print(let)


def testForElse(ch):
    for ch in ['a', 'b']:
        print('for loop')
    else:
        print('for-else')


testForElse('t')

# while statement
i = 0
while i < 9:
    i += 1
    if i % 2 != 0:
        continue
    print(i)
    if i == 6:
        break
