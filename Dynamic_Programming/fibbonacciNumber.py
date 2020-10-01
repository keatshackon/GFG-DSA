import time

# recursive Solutions

# def fibbonacciNumber(n):
# 	if(n == 0 or  n == 1):
# 		return n
# 	return fibbonacciNumber(n-1) + fibbonacciNumber(n-2)


# Using Dynamic Programming!
# using Top-Down approach or memoisations


def fibbonacciNumber(n):
	if(memo[n] != -1):
		return memo[n]
	if(n == 0 or  n == 1):
		memo[n] = n
		return memo[n]
	else:
		memo[n] = fibbonacciNumber(n-1) + fibbonacciNumber(n-2)
		return memo[n]
	

#using tabulation In DP(Dynamic Programming)
# def fibbonacciNumber(n):
# 	dp = [-1]*(n+1)
# 	dp[0] = 0;dp[1] = 1
# 	for i in range(2,n+1):
# 		dp[i] = dp[i-1] + dp[i-2]

# 	return dp[n]

n = int(input("enter the Nth number to find the Nth Fibbonacci Number =>"))
memo = [-1]*(n+1)

if __name__ == '__main__':
	t0 = time.time()
	print()
	#n = int(input("enter the Nth number to find the Nth Fibbonacci Number =>"))
	print(fibbonacciNumber(n))
	t1 = time.time()
	print(t1-t0)