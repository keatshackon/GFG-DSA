# def BinarySearch(arr,target):
# 	arr.sort()
# 	l=0
# 	r=len(arr)-1
# 	while(l<=r):
# 		mid = (l+r)//2
# 		if(arr[mid] == target):
# 			print("Found Element",arr[mid],"At index",mid)
# 			return
# 		elif(arr[mid] > target):
# 			r = mid-1
# 		else:
# 			l = mid+1
# 	print("Not Found")






def BinarySearch(arr,l,r,target):
	if(l>r):
		print("Not Found")
		return
	else:
		mid = (l+r)//2
		if(arr[mid] == target):
			print("Found Element",arr[mid],"At index",mid)
			return 
		elif(arr[mid] > target):
			BinarySearch(arr,l,mid-1,target)
		else:
			BinarySearch(arr,mid+1,r,target)




if __name__ == '__main__':
	target = int(input("Enter a element to be searched =>"))
	arr = [24,6,58,65,95,9]
	arr.sort()
	print(arr)
	l=0
	r=len(arr)-1
	BinarySearch(arr,l,r,target)