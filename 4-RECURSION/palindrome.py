

"""
Q>> check a given String is palindrome!
"""


def palindrome(str,i,l):
	if(i>l):
		return True
	if(i==l):
		return True

	if(str[i] != str[l]):
		return False

	return palindrome(str,i+1,l-1)


if __name__ == '__main__':
	str = "aaaabbbaaaa"
	print(palindrome(str,0,len(str)-1))
