# Basic print statement in Python
print("Hello, World!")
# Variable assignment and print
"""
my_name = input("What is your name? ")
print(f"Hello, {my_name}!")
"""

# Arithmetic operation
a = 5
b = 10

sum_result = a + b
subst_result = a - b
moltiplication_result = a * b
division_result = a / b
remainder_result = a % b

print(f"The sum of {a} and {b} is {sum_result}.")
print(f"The sum of {a} and {b} is {subst_result}.")
print(f"The multiplication of {a} and {b} is {moltiplication_result}.")
print(f"The division of {a} by {b} is {division_result}.")
print(f"The remainder of {a} divided by {b} is {remainder_result}.")


# Conditional statement
if sum_result > 10:
    print("The sum is greater than 10.")
else:
    print("The sum is 10 or less.")

# Looping through a range
for i in range(5):
    print(f"Current number is {i}")

# While loop example
count = 0
while count < 5:
    print(f"Count is {count}")
    count += 1


# Function definition and call
def greet(name):
    return f"Hello, {name}!"

# Functions calling another function
def add_numbers(x, y):
    return x + y

def calculate_and_greet(name, x, y):
    total = add_numbers(x, y)
    greeting = greet(name)
    return f"{greeting} The total of {x} and {y} is {total}."

def greeting_message():
    calculate_and_greet("Bob", 3, 4)

# Dunder method main
if __name__ == "__main__":
    greeting_message()



