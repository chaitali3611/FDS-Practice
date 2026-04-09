#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push operation
void push(int digit)
{
    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = digit;
    }
}

// Pop operation
int pop()
{
    if(top == -1)
    {
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

int main()
{
    int num, temp, remainder;
    int isPalindrome = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Push all digits into stack
    while(temp != 0)
    {
        remainder = temp % 10;
        push(remainder);
        temp = temp / 10;
    }

    temp = num;

    // Compare digits with stack (reverse order)
    while(temp != 0)
    {
        remainder = temp % 10;

        if(remainder != pop())
        {
            isPalindrome = 0;
            break;
        }

        temp = temp / 10;
    }

    if(isPalindrome)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    return 0;
}