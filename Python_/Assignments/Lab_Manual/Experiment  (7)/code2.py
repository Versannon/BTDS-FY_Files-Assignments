# Demonstrate inheritance
class Animal:
    def speak(self):
        print('Animal speaks')

class Dog(Animal):
    def speak(self):
        print('Dog barks')

# Create objects
animal = Animal()
dog = Dog()
animal.speak()
dog.speak()