class Solution {
    func merge(_ nums1: inout [Int], _ m: Int, _ nums2: [Int], _ n: Int) {
        var ans = [Int]()
        var idx1 = 0
        var idx2 = 0
        while idx1 != m && idx2 != n {
            if nums1[idx1] < nums2[idx2] {
                ans.append(nums1[idx1])
                idx1 += 1;
            } else {
                ans.append(nums2[idx2])
                idx2 += 1;
            }
        }
        if idx1 != m {
            ans.append(contentsOf: nums1[idx1...m - 1])
        } else if idx2 != n {
            ans.append(contentsOf: nums2[idx2...n - 1])
        }
        nums1 = ans
    }
}