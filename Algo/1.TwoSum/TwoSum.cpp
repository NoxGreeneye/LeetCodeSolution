// Source : https://oj.leetcode.com/problems/two-sum/
// Author : Tiffany Fu
// Date   : 2018-08-15

/**********************************************************************************
 *
 * Given an array of integers, find two numbers such that they add up to a
 *specific target number.
 *
 * The function twoSum should return indices of the two numbers such that they
 *add up to the target, where index1 must be less than index2. Please note that
 *your returned answers (both index1 and index2) are not zero-based.
 *
 * You may assume that each input would have exactly one solution.
 *
 * Input: numbers={2, 7, 11, 15}, target=9
 * Output: index1=1, index2=2
 *
 *
 **********************************************************************************/
#include <iostream>
#include <iterator>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
      int left = target - nums[i];
      if (m.count(left)) {
        return {m[left], i};
      } else {
        m[nums[i]] = i;
      }
    }
    return {};
  }
};

int main() {
  vector<int> nums = {0, 3, 4, 5, 6};
  Solution ans;
  vector<int> answer = ans.twoSum(nums, 6);
  vector<int>::iterator iter;
  for (iter = answer.begin(); iter != answer.end(); ++iter) {
    cout << *iter << "\t";
  }
  return 0;
}
