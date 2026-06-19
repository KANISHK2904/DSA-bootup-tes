/*Patient ID Insertion

You are developing a hospital patient queue management system. Each patient is assigned a unique Patient ID when they arrive. These IDs are maintained in a linked list in the order of arrival. As new patients register, their IDs must be inserted at the end of the linked list.

Write a program to insert patient IDs at the end of the linked list. After all insertions are completed, print the entire linked list to verify the queue order.

Input Format

The first line contains an integer N, representing the number of patients to be added to the queue.
The second line contains N space-separated integers representing the Patient IDs.

Output Format

After inserting the Patient IDs, print the current linked list with elements separated by a space.

Sample Input 1

6

2101 2105 2110 2122 2133 2140

Sample Output 1

2101 2105 2110 2122 2133 2140

Explanation

Initially, the queue is empty. Each Patient ID is inserted at the end as patients arrive. After inserting all five IDs, the final queue order is printed.*/


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
