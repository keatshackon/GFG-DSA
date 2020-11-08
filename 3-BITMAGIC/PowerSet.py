

"""
Q >> Generate all power set of given String

	example 

	str = "ABC" ==> {"", "A", "B", "C", "AB" ,"BC", "AC", "ABC"}

	formula to find out power set is 2^n  [where n is the length of String] 

	NOTES :

			000 ==> 	""
			001 ==> 	"A"
			010 ==> 	"B"
			011 ==> 	"BC"
			100 ==> 	"C"
			101 ==> 	"AC"
			110 ==>		"AB"
			111 ==>		"ABC"

"""

import math

def powerSet(str):
	n = pow(2,len(str))
	for i in range(n):
		for j in range(len(str)):
			if(i & (1<<j)!=0):
				print(str[j],end="")
		print()

if __name__ == "__main__":
	powerSet("AB")