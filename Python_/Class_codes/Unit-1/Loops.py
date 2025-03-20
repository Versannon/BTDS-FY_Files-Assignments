"""while Look
 while condition:
     statement1
     statement2
     increment/decrement     
for loop
for iterator in sequence:
    statement1
    statement2
    statement3 

    
for iterator in range(start, stop, step):
range() function
range(start, stop, step)
"""

x= int(input("Enter a number: "))
y= int(input("Enter the interval: "))
z= int(input("Enter starting point: "))
for i in range(z,x,y):
    print(i)