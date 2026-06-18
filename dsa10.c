/*10.  DS | REC | 18 Jun
Course Progress
0%
•••
•••
Completed
Gate Balance Checker in a Smart Parking System

You are part of a development team building a smart parking management system for a large shopping mall. The system records the opening and closing of entry gates using symbols.

An opening gate is represented by (
A closing gate is represented by )
Ideally, every gate that opens must also close properly. However, due to sensor errors or incomplete logs, the system may record unbalanced gate operations.

Your task is to develop a program that determines the minimum number of gate operations that must be added to make the recorded sequence valid. A sequence is considered valid if every opening gate has a matching closing gate and the order of operations is correct.



Problem Description

Given a string S consisting only of ( and ), determine the minimum number of additional symbols required to make the sequence valid.



Input Format

The first line contains an integer T, the number of test cases.
For each test case, the next line contains a string S consisting of only ( and ).


Output Format

For each test case, print the minimum number of parentheses required to make the string valid.


Constraints

0 ≤ len(S) ≤ 1000


Sample Input

3

())

(((

())(



Sample Output

1

3

2



Explanation

For the string ()), one opening parenthesis is required to balance the parentheses. Hence, the output is 1.
For the string (((, three closing parentheses are required . Hence, the output is 3.
For the string ())(, one opening parenthesis and one closing parenthesis are required to balance the parentheses. Hence, the output is 2*/



#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        char s[1005];
        scanf("%s", s);

        int open = 0;
        int ans = 0;

        for(int i = 0; s[i] != '\0'; i++)
        {
            if(s[i] == '(')
            {
                open++;
            }
            else
            {
                if(open > 0)
                    open--;
                else
                    ans++;
            }
        }

        printf("%d\n", ans + open);
    }

    return 0;
}
