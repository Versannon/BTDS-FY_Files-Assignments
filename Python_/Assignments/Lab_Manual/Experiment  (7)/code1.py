# Demonstrate class and object creation
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display(self):
        print(f'Name: {self.name}, Age: {self.age}')

# Create an object
person1 = Person('Alice', 30)
person1.display()