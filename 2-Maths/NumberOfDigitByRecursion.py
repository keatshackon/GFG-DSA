



def NumberOfDigit(n):
	if(n<1):
		return 0
	else:
		return NumberOfDigit(n//10)+1


if __name__ == "__main__":
	print(NumberOfDigit(2237483))
