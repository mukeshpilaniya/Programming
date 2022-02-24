func twoSum(nums []int, target int) []int {
    
    mp := make(map[int]int)
    
    for i, r :=range nums{
        if _ ,ok := mp[target-r]; ok{
            return []int {mp[target-r], i}
        }else{
            mp[nums[i]]=i
        }
    }
    return []int{}
}