#  Sorting algorithms & Big O

In this project I learnt and put my knowledge on sorting algorithms and the Big O into practise

## Learning Objectives
```
* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm
```

### Data Structure used
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

|Files | Prototypes |
| --- | --- |
| `0-bubble_sort.c`| `void bubble_sort(int *array, size_t size);` |
| `1-insertion_sort_list.c` | `void insertion_sort_list(listint_t **list);`|
| `2-selection_sort.c` | `void selection_sort(int *array, size_t size);` |
| `3-quick_sort.c` | `void quick_sort(int *array, size_t size);` |

## Tasks

* **0. Bubble sort**
	* [0-bubble_sort.c](./0-bubble_sort.c): Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm
* **1. Insertion sort**
	* [1-insertion_sort_list.c](./1-insertion_sort_list.c): Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
* **2. Selection sort**
	* [2-selection_sort.c](./2-selection_sort.c): Write a function that sorts an array of integers in ascending order using the Selection sort algorithm
* **3. Quick sort**
	* [3-quick_sort.c](./3-quick_sort.c): Write a function that sorts an array of integers in ascending order using the Quick sort algorithm
