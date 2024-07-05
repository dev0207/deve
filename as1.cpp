class Complex:
    def __init__(self, real=0, imag=0):
        self.real = real
        self.imag = imag
    
    def __add__(self, other):
        # Overloading the + operator for addition of two complex numbers
        return Complex(self.real + other.real, self.imag + other.imag)
    
    def __mul__(self, other):
        # Overloading the * operator for multiplication of two complex numbers
        real_part = self.real * other.real - self.imag * other.imag
        imag_part = self.real * other.imag + self.imag * other.real
        return Complex(real_part, imag_part)
    
    def __str__(self):
        # String representation of the complex number
        return f"{self.real} + {self.imag}i"
    
    def __repr__(self):
        # Detailed string representation of the complex number
        return f"Complex({self.real}, {self.imag})"
    
    def __eq__(self, other):
        # Equality comparison operator
        return self.real == other.real and self.imag == other.imag
    
    def __ne__(self, other):
        # Inequality comparison operator
        return not self.__eq__(other)

# Overloading input and output operators << and >>
import sys

def main():
    # Test cases
    c1 = Complex(1, 2)
    c2 = Complex(3, 4)
    
    # Addition
    print(f"c1 + c2 = {c1 + c2}")  # Uses __add__ method
    
    # Multiplication
    print(f"c1 * c2 = {c1 * c2}")  # Uses __mul__ method
    
    # Custom input/output using << and >> (for simplicity, using stdin/stdout)
    # Reading input
    print("Enter a complex number (e.g., 5+6i):")
    input_str = sys.stdin.read().strip()
    c3 = Complex.from_string(input_str)  # Assuming a class method to create Complex from string
    
    # Outputting complex number
    print(f"You entered: {c3}")  # Uses __str__ method

if __name__ == "__main__":
    main()

