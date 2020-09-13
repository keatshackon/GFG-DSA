

"""
Q >> given a binary string,find out longest substring with Set Bit

	example : 

			str = "1110101011100001101010111111000111"
			ANS ==>6[consecutive set bit]

"""

def longestSetBit(str):
	longest = 0
	cur = 0
	m =0 
	i=0
	while(i<len(str)):
		if(str[i]=='1'):
			cur = i
			m=0
			while(cur<len(str)):
				if(str[cur]=='1'):
					cur+=1
					m+=1
				else:
					break;
			i = cur
			if(m>longest):
				longest = m
		else:
			i+=1
	
	return longest


if __name__ == "__main__":
	print(longestSetBit("11011001010101100000100111110111"))


