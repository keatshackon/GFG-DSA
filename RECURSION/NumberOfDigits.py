

"""
Q >> Find out Number Of Digits in given Integers
"""

def NumberOfDigits(n):
	if(n<10):
		return n
	else:
		return NumberOfDigits(n//10)+n%10;


if __name__ == "__main__":
	print(NumberOfDigits(521))