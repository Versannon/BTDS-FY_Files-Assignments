# Create and raise a custom exception
class CustomError(Exception):
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)

try:
    raise CustomError("This is a custom exception.")
except CustomError as e:
    print(f"Caught a custom exception: {e}")