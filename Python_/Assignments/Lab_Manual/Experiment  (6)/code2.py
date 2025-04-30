# Write user input to a file
file_name = 'user_input.txt'
user_input = input('Enter some text to write to the file: ')
with open(file_name, 'w') as file:
    file.write(user_input)
print(f'Text written to {file_name}')