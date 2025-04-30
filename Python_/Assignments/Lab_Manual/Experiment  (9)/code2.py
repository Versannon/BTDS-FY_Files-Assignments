# Calculate nth Fibonacci number using recursion
def fibonacci(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

n = int(input("Enter the position (n): "))
print(f"The {n}th Fibonacci number is {fibonacci(n)}")