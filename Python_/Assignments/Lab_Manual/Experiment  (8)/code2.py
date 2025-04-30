# Demonstrate try-except-else-finally block
try:
    num = int(input("Enter a number: "))
    result = 10 / num
except ZeroDivisionError:
    print("Cannot divide by zero.")
except ValueError:
    print("Invalid input. Please enter a number.")
else:
    print(f"Division successful. Result: {result}")
finally:
    print("Execution completed.")