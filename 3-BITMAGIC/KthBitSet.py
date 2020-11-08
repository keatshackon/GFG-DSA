
"""
Q1 >> find out wheather a k-th bit set or not in a given Integer! 





NOTES: TO GENERATE THE KTH BIT SET NUMBER JUST USE THIS EXPRESSSION (1<<(K-1))

"""

# o(1) | space o(1)

def KthBitSet(n,k):
	if(n & (1<<(k-1))!=0):
		return True
	else:
		return False


if __name__ == "__main__":
	print(KthBitSet(5,1))
	print(KthBitSet(8,4))
	print(KthBitSet(4,2))
	print(KthBitSet(3,10))
	print(KthBitSet(10,3))


