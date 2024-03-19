import random
import math

min_range = int(input("Input min: "))
max_range = int(input("Input max: "))

random_number = random.randint(min_range, max_range)

# print(random_number)

min_guess = math.log2(max_range-min_range+1)
count = 0
while (count <= min_guess):
    user_guess = int(input("Guess number: "))
    count += 1
    if user_guess < random_number:
        print("Try Again! You guessed too small")
    elif user_guess > random_number:
        print("Try Again! You guessed too high")
    else:
        break
if count > min_guess:
    print("Better Luck Next Time!\nguessed {} times".format(count))
else:
    print("Congratulations!\nguessed {} times".format(count))
