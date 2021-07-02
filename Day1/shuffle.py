def shuffle(nums) :
        mid = n//2
        i = 0 
        result = [0]*len(nums)
        for j in range(len(nums)):
            if j%2==0 :
                result[j]=nums[i]
                i+=1
            else :
                result[j]=nums[mid]
                mid+=1
        return result
if __name__ == "__main__" :
    array = list()
    n = input("enter the length of array")
    for i in range(n):
        array.append(input(""))
    print(shuffle(array))