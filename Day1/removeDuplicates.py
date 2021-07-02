def removeDuplicates(nums):
    temp = 0
    for i in range(len(nums)):
        if nums[i] != nums[temp] :
            temp += 1
            nums[temp] = nums[i]
    return temp+1

    
if __name__ == "__main__":
    
    array = list()
    n = input("enter the length of array")
    for i in range(n):
        array.append(input(""))
    removeDuplicates(array)