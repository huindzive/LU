# Listing 8.9: arithmeticeval.py 
# R.L. Halterman. Fundamentals of Python Programming, 2019
def add(x, y):
    """
    Adds the parameters x and y and returns the result
    """
    return x + y
def multiply(x, y):
    """
    Multiplies the parameters x and y and returns the result
    """
    return x * y
def evaluate(f, x, y):
    """
    Calls the function f with parameters x and y:
    f(x, y)
    """
    return f(x, y)
def main():
    """
    Tests the add, multiply, and evaluate functions
    """
    print(add(2, 3))                # => 5
    print(multiply(2, 3))           # => 6
    print(evaluate(add, 2, 3))      # => 5
    print(evaluate(multiply, 2, 3)) # => 6
    
main()