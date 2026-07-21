class Solution {
    func isPalindrome(_ s: String) -> Bool {
        var ans = Array(s.lowercased())
        var l = 0
        var r = ans.count - 1
        while l < r {
            while l < r && !ans[l].isLetter && !ans[l].isNumber {
                l += 1
            }
            while l < r && !ans[r].isLetter && !ans[r].isNumber {
                r -= 1
            }
            if l < r && ans[l] != ans[r] {
                return false
            } else {
                l += 1
                r -= 1
            }
        }
        return true
    }
}

// test