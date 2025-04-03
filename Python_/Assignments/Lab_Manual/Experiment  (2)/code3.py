def fb_series(n):
    a, b = 0, 1
    for _ in range(n):
        print(a, end=" ")
        a, b = b, a + b

# Input from the user
n = int(input("Enter the number of terms: "))
fb_series(n)