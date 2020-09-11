

"""
Q>> Check Wheter A Given Number Is Power Of Two or Not!
"""

def powerOfTwo(n):
	if(n&(n-1)==0):
		return True
	else:
		return False


if __name__ == "__main__":
	print(powerOfTwo(16))
	print(powerOfTwo(32))
	print(powerOfTwo(20))
	print(powerOfTwo(4))
	print(powerOfTwo(19))
