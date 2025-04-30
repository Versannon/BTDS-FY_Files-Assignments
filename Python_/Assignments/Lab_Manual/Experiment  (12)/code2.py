# Create a Pandas DataFrame and perform basic operations
import pandas as pd

# Create a Pandas DataFrame
data = {
    'Name': ['Alice', 'Bob', 'Charlie'],
    'Age': [25, 30, 35],
    'City': ['New York', 'Los Angeles', 'Chicago']
}
df = pd.DataFrame(data)

# Perform selection
print("Selecting 'Name' column:")
print(df['Name'])

# Perform filtering
print("Filtering rows where Age > 30:")
print(df[df['Age'] > 30])