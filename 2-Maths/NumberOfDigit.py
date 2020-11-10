import math
def NumberOfDigits(n):
	return int(math.log(n,(10))+1)

if __name__ == '__main__':
	print(NumberOfDigits(5216543212345678909876))