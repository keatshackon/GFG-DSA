

"""
	Given a integer array, find out the element which are in odd number of time,
	provding only one element are in odd number of time!
"""



"""
NOTES: PROPERTY  OF XOR ==>
		X^0 = X
		X^Y = y^X
		(X^Y)^Z = X^(Y^Z)

		::>Order doesn't not matter as long  long number is in even
				except one 

"""
def oddNumberTime(arr):
	x = 0 
	for i in arr:
		x = x^i
	return x


if __name__ == "__main__":
	print(oddNumberTime([3,3,3,44,44,5,5,6,6,3,101,44,44]))