

"""
Q>> Counting set bit in a given Integer!

"""


#o(log(n)) | space o(1)

# My Implementation

# def countingSetBit(n):
# 	c=0
# 	while(n>0):
# 		if(1&n==1):
# 			c+=1
# 		n=n>>1
# 	return c



"""
	NOTES : ON ANY INTEGER IN BINARY FORM SAY[N],IF WE TAKE (N-1) THE ITS RIGHT
			MOST SET BIT WIIL BE AUTOMATICALLY FLIPPED 

	EXAMPLE:==>
			
			1>	N=4[IN BINARY => 100]
				THE N-1 = 3 [ IN BINARY => 011 ]

			2> 	N = 5 [IN BINARY => 101]
				THEN N-1 = 4[IN BINARY => 100]
			
			::::> right most  SET bit always get flip
		
		========================================
		|THIS ALGORITHM CALLED BRIAN KARHIGHAN!|
		========================================
"""



# o(1) | space o(1)
# number of loop's run  = number of set bit in given integer





def countingSetBit(n):
	res = 0
	while(n>0):
		n = (n & (n-1))
		res+=1
	return res




if __name__ == "__main__":
	print(countingSetBit(8))
	print(countingSetBit(10))
	print(countingSetBit(15))
	print(countingSetBit(5))
	print(countingSetBit(7))

