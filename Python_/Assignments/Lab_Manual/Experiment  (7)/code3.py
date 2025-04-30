# Demonstrate method overriding
class Parent:
    def show(self):
        print('This is the parent class')

class Child(Parent):
    def show(self):
        print('This is the child class')

# Create objects
parent = Parent()
child = Child()
parent.show()
child.show()