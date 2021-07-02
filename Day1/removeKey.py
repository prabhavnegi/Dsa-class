def removeKey(nums, key) -> int:
        curr = 0
        for i in range(len(nums)): 
            if(nums[i] != key):
                temp = nums[i]
                nums[i] = nums[curr]
                nums[curr] = temp
                curr += 1
        return curr


if __name__ == "__main__":
    array = list()
    n = input("enter the length of array")
    for i in range(n):
        array.append(input(""))
    key = input("enter key")
    removeKey(array, key)
