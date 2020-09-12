


"""
		ANs==> 321123
"""

def trick(n):
	if(n<1):
		return;
	else:
		print(n)
		trick(n-1)
		print(n)


if __name__ == "__main__":
	trick(3)