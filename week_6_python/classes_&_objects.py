# Class declaration
class Dog:
    # Class variable
    species = "Canis familiaris"

    # Initializer / Instance attributes
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Instance method
    def description(self):
        return f"{self.name} is {self.age} years old."

    # Another instance method
    def speak(self, sound):
        return f"{self.name} says {sound}."

# Instantiate the Dog object
dog1 = Dog("Buddy", 9)
dog2 = Dog("Milo", 5)

# Access the instance attributes
print(f"{dog1.name} is {dog1.age} years old.")
print(f"{dog2.name} is {dog2.age} years old.")  

# Is the dog1 a mammal?
if dog1.species == "Canis familiaris":
    print(f"{dog1.name} is a {dog1.species}.")

# Call our instance methods
print(dog1.description())
print(dog2.description())
print(dog1.speak("Woof Woof"))
print(dog2.speak("Bark Bark"))

# Access the class variable
print(f"{dog1.name} belongs to the species {dog1.species}.")
print(f"{dog2.name} belongs to the species {dog2.species}.")

# Accessing the class variable directly from the class
print(f"The species of dog is {Dog.species}.")

# Accessing the class variable directly from the instance
print(f"{dog1.name} is a {dog1.species}.")

# Accessing the class variable directly from the instance
print(f"{dog2.name} is a {dog2.species}.")