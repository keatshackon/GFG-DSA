

"""
	Given a integer array, find out the element which are in odd number of time,
	provded only Two element are in odd number of time!
"""



"""
NOTES: PROPERTY  OF XOR ==>
		X^0 = X
		X^Y = y^X
		(X^Y)^Z = X^(Y^Z)

		::>Order doesn't not matter as long  long number is in even
				except one 

"""
# my implementation
# o(n) | space o(n)
def oddNumberTime(arr):
	res={}
	for i in range(len(arr)):
		if(arr[i] not in res):
			res[arr[i]] = 1
		else:
			res[arr[i]] +=1;
	print(res)

	main=[]
	for key in res:
		if(res[key]%2!=0):
			main.append(key)

	return main

if __name__ == "__main__":
	print(oddNumberTime([3,3,3,44,44,5,5,6,6,3,101,44]))