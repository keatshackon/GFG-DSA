import  time,math

def prime(n):
	if(n>2 and n%2==0):
		return False
	if(n==0 or n==1):
		return False
	i=2
	while(i<=math.sqrt(n)+1):
		if(n%i==0):
			return False
		i+=1
	return True






if __name__ == '__main__':
	t0 = time.time()
	
	for i in range(1000000):
		prime(i)
	

	t1 = time.time()
	print(t1 - t0)