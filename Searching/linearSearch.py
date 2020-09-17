def linearSearch(arr,target):
	for i in range(len(arr)):
		if(arr[i] == target):
			print("Found",arr[i],"At position => ",i+1)
			return
	print("Not Present")


if __name__ == '__main__':
	target = int(input("Enter Element to be searched="))
	linearSearch([23,34,35,45,6,5,7,57,554,3,54,3,43,4,31,21,2,435,63,435,643,756],target)
