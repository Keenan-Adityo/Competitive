import Foundation



/*
 * Complete the 'findSmallestMissingPositive' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY orderNumbers as parameter.
 */

func findSmallestMissingPositive(orderNumbers: [Int]) -> Int {
    var dup = orderNumbers
    // Write your code here
    // var ans = 1
    for i in 0..<dup.count {
        // swapping
        guard dup[i] > 0 || dup[i] < dup.count else {
            continue
        }
        
        if dup[i] != i + 1 {
            var arrange = true
            
            while arrange {
                guard dup[i] > 0 || dup[i] < dup.count || dup[i] == dup[dup[i] + 1] else {
                    arrange = false
                    continue
                }
                dup.swapAt(i, dup[i] + 1)
            }
        }
        // if got negative or zero, ans keep in this index, go next index
        // if got the right order numbers ans++
        // if duplicate (lower than ans) change it to zero then treat the same as before
    }
    return 1
}

guard let orderNumbersCount = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
else { fatalError("Bad input") }

var orderNumbers = [Int]()

for _ in 1...orderNumbersCount {
    guard let orderNumbersItem = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
    else { fatalError("Bad input") }

    orderNumbers.append(orderNumbersItem)
}

guard orderNumbers.count == orderNumbersCount else { fatalError("Bad input") }

let result = findSmallestMissingPositive(orderNumbers: orderNumbers)

print(result)
