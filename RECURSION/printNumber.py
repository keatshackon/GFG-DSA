# def printNumber(n):
# 	if(n<=0):
# 		return
# 	else:
# 		print(n,end=" ")
# 		printNumber(n-1)




"""
Same question but print in Reverse Order!
"""

def printNumber(n):
	if(n<=0):
		return
	else:
		printNumber(n-1)
		print(n,end=" ")

if __name__ == '__main__':
	printNumber(5)