/*20 ) Find Kth Smallest Element in a BST

A school maintains student roll numbers in a Binary Search Tree (BST) to keep them organized.The administration wants to find the Kth smallest roll number from the list. This helps them identify students based on ranking or order.Your task is to build the BST using the given roll numbers and find the Kth smallest element.Given the root node of a Binary Search Tree (BST) and an integer k, return the Kth smallest element in the BST, where k is 1-indexed.

Input Format

First, enter the number of elements (n).
Then, enter n unique integers to insert into the BST.
Finally, enter the integer k.
Output Format

Display the Kth smallest element or a message indicating that the value of k is out of range.

Sample Input 1

6

50 30 70 20 40 60

3

Sample Output 1

40

Explanation

Step 1: Insert the values into the BST:

50, 30, 70, 20, 40, 60

Step 2: Perform In-Order Traversal (Left → Root → Right), which gives sorted order:

20 30 40 50 60 70

Step 3: The 3rd smallest element is 40

Hence, the output is:

40*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int k;
    scanf("%d", &k);

    // simple sorting (bubble sort)
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    if(k >= 1 && k <= n)
        printf("%d", a[k-1]);
    else
        printf("Out of range");

    return 0;
}
