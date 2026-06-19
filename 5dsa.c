/*Inserting a Passenger into a Boarding Queue

You are developing a boarding management system for an airport. Each passenger is assigned a unique boarding ID, and passengers are arranged in a linked list based on their boarding order. Occasionally, a new passenger receives priority and must be inserted at a specific position in the queue to maintain the correct boarding sequence. Write a program that inserts a new passenger (represented by a unique boarding ID) at a specified position in the queue and prints the updated list after insertion. If the entered position is out of range, print the message "Position out of range".

Input Format
The first line contains an integer N, the number of passengers initially in the queue.
The second line contains N space-separated integers representing the boarding IDs.
The third line contains an integer P, the position at which the new passenger should be inserted (1-based index).
The fourth line contains an integer M, the new boarding ID to be inserted.
Output Format

Print the updated boarding queue with elements separated by a space.


Constraints
The value of P will always be between 1 and N+1 (both inclusive).

Example 1
Sample Input 1
4
101 102 103 104
2
999
Sample Output 1

101 999 102 103 104

Explanation

The queue initially contains 4 passengers: 101 102 103 104.

The new passenger with ID 999 is inserted at position 2 (between 101 and 102).

The updated queue becomes: 101 999 102 103 104.

Example 2

Sample Input 2

3

10 20 30

5

99

Sample Output 2

Position out of range*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[1000];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int p, m;
    scanf("%d", &p);
    scanf("%d", &m);

    // check position validity
    if(p < 1 || p > n + 1)
    {
        printf("Position out of range");
        return 0;
    }

    // shift elements to right
    for(int i = n; i >= p; i--)
    {
        a[i] = a[i - 1];
    }

    // insert new element
    a[p - 1] = m;
    n++;

    // print result
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
