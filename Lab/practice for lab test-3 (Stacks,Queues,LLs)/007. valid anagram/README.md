Question 7: Valid Anagram

Problem Statement



Given two strings s and t, return true if t is an anagram of s, otherwise return false.



An anagram means:



Same characters

Same frequency

Order doesn’t matter

Function Signature

bool isAnagram(string s, string t);

Example 1

s = "anagram", t = "nagaram"

Output → true

Example 2

s = "rat", t = "car"

Output → false

Hint



Use:



unordered\_map<char, int>

OR

Array of size 26 (faster)

Edge Cases

Different lengths → immediately false

Case sensitivity (assume lowercase unless told otherwise)

Goal



Time: O(n)

Space: O(1) (if using array)

