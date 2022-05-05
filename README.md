                                                                            # Sorting_algorithm
___________________________________________________________________________________________________________________________________________________________________

The purpose of sorting is to facilitate the later search for members of the sorted set.

Sorting refers to ordering data in an increasing or decreasing fashion according to some linear relationship among the data items.

There are Two types of Sorting techniques : COMPARISON BASED and NON-COMPARISON BASED sorting. 
Sorting can be performed using several methods, they are:

COMPARISON BASED SORING :- 
                            * Insertion sort
                            * Selection sort
                            * Bubble Sort
                            * Merge Sort
                            * Quick Sort
                            * Heap sort

NON-COMPARISON BASED SORING :-
                            * Radix sort
                            * Bucket sort
                            * Counting sort
                            
                            
                            
In the first type, a comparator is required to compare numbers or items. 
Basically, this comparator defines the ordering like in the numerical order, lexicographical order, also known as dictionary order to arrange elements.  
On the other hand, non-comparison-based sorting algorithms don't use comparison but rely on integer arithmetic on keys.



👎  One of the most critical differences between these two sorting algorithms is speed. 
    Non-comparison sorting is usually faster than sorting because of not doing the comparison. 
    The limit of speed for a comparison-based sorting algorithm is O(NlogN) while for non-comparison-based algorithms it's O(n) i.e. linear time.

👎  The best case for memory complexity with the comparison-based sorting is O(1) because it's possible to sort an array of numbers in place i.e. 
    without using any additional memory.You can see the code for the in-place Quicksort algorithm here. 
    On the other hand, memory complexity for the non-comparison-based sorting algorithm is always O(n).
