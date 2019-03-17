# Next-Palindrome
Next Smallest palindrome number.

In this take first input as t represents test case. And string s which takes a number whose next palindrome is to found.

Steps:
1. Find the middle index of string and assign (index-1) to lefthalf and (index or index+1) to righthalf. (Depends on length of string even or odd)
2. When element matched then decrement lefthalf and increment righthalf.
3. If lefthalf element is greater than righthalf element then copy the left half to righthalf.
4. Else if lefthalf element is smaller than righthalf element then increment the mid element and carry it to the MSB of leftside and copy mirror of left to right side.
