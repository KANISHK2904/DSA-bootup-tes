/*11)Reverse First K Tasks in a Processing Queue

You are part of a development team building a task scheduling system for a cloud computing platform. Tasks submitted to the system are stored in a queue and processed in the order they arrive.

However, due to priority adjustments, the system administrator wants to reverse the order of the first K tasks in the queue. This allows recently important tasks among the first K to be processed sooner, while the remaining tasks keep their original order.

Your task is to write a program that reverses only the first K elements of the queue while leaving the rest of the queue unchanged.

For example, if the queue contains task IDs [1, 2, 3, 4, 5, 6] and K = 3, the first three tasks will be reversed, resulting in [3, 2, 1, 4, 5, 6].



Input Format

The first line contains an integer N, representing the number of tasks in the queue.
The second line contains N space-separated integers, representing the task IDs.
The third line contains an integer K, representing the number of elements to reverse from the beginning of the queue.


Constraints

K<N



Output Format

Print the modified queue after reversing the first K elements.


Sample Input

6

1 2 3 4 5 6

3



Sample Output

3 2 1 4 5 6



Explanation

Initially, the queue of tasks is:

[1, 2, 3, 4, 5, 6]

The first 3 tasks (1, 2, 3) are reversed to become (3, 2, 1).

The remaining tasks (4, 5, 6) remain in the same order.

Final queue:

[3, 2, 1, 4, 5, 6]*/

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

    // reverse first k elements
    int i = 0, j = k - 1;

    while(i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
