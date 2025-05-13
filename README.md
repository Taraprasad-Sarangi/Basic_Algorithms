This repository contains basic algorithm implementations for both searching and sorting

-------------------------------------------------------------------------------------------------------------------------

###LINEAR SEARCH

In a given sorted array, it searches for the target element after iterating through the array one by one.

Time complexity
Best case - O(1)
Worst case - 0(n)

-------------------------------------------------------------------------------------------------------------------------

####BINARY SEARCH

-In a given sorted array, it divides the array in two half and checks whether the given number is on the left half or the right half.
-It finds a middle index first.
-compare the middle element with the target element or often refered to as **key** .
-If middle element = target element then terminate the program and display the middle element and its position in the array.
-If the key isnt the middle element, then check whether the key is less than or more than the middle element.
-That will help us decide which half will be used for next search space.
-If key < mid then pick left array, if key > mid then pick right array.
-The process will continue until the key is found or the array is exhausted.
-If array was exhausted then target element wasn't present in array.

Time complexity - O(logn)

-------------------------------------------------------------------------------------------------------------------------

###INSERTION SORT

-Compares the first element with the second.
-If 1st > 2nd then swap
-Then compares the element in the second position to the third position, if 2nd > 3rd then swap
-If the swapped element is also smallet than the fist element, swap again.
-Repeat until the array is sorted.

**NOTE**
-This description is for ascending order i.e. lower to higher, simply change the inequality symbols (angle brackets) if you want descending order.

Time complexity
Best case - O(n)
Worst case - O(n^2)

-------------------------------------------------------------------------------------------------------------------------

###MERGE SORT

-Uses divide and conquer algorithm.
-Start by splitting the array in half, then continue to split the subarrays in half until the array has been split into pairs.
-Then each pair does a comparison of the first and the second element.
-Swap if 2nd > 1st.
-Now we have sorted pairs.
-Then it combines 2 sets of pairs and do the same thing again.
-This is done till the entire array is rebuilt and we have a sorted array.

Time complexity - O(log(n))
Space complexity - O(n)

-------------------------------------------------------------------------------------------------------------------------

###QUICK SORT

-Also uses divide and conquer algorithm
-First we pick a number close to the median,once we select that number, we move it to the end of the list, now we place a pointer at the left and right most element and compare the two.
-If the leftmost > pivot and rightmost < pivot, we swap them, otherwise, leave them as it is. We continue through the list until our pointers cross.
-When they do, we replace the element at the left pointer without our pivot.
-Now currently, everything before our pivot is less than pivot and after is greater.
-We will do the same process with both the list now.
Once we finish, the list is completely sorted.

**NOTE** - The code can be optimized to significantly reduce the probablility of worse-case, and on average 2-3 times faster than merge sort.
-It also have a space complexity of O(log(n)).

Time complexity
Best - O(nlog(n))
Worst - O(n^2)

-------------------------------------------------------------------------------------------------------------------------

###BUBBLE SORT

- Repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
- After each pass, the largest element "bubbles" to the end of the list.
- Process is repeated for the remaining unsorted part of the list.
- Continues until no more swaps are needed (i.e., the list is sorted).

**NOTE** - Bubble sort is easy to implement but is inefficient on large datasets.

- It has a space complexity of O(1) (in-place sorting).

Time complexity
Best - O(n)
Worst - O(n^2)

-------------------------------------------------------------------------------------------------------------------------

###SELECTION SORT

- A comparison-based algorithm.
- Divides the list into a sorted and an unsorted part.
- Repeatedly finds the minimum element from the unsorted part and swaps it with the first unsorted element.
- The sorted part grows with each iteration from left to right.
- Continues until the entire list is sorted.

**NOTE** - Unlike bubble sort, selection sort makes fewer swaps, but it still performs O(n²) comparisons.

- It also has a space complexity of O(1).

Time complexity
Best - O(n^2)
Worst - O(n^2)

-------------------------------------------------------------------------------------------------------------------------
###How to run

all files in in c++ format so you can just open up the bash terminal and compile it with the command

g++ filename.cpp -o exename

example: g++ linearseach.cpp -o linearsearch

then run it by

./filename

example: ./linearsearch
