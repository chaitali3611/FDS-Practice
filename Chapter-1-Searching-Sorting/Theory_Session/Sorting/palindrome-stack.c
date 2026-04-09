#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push function
void push(int x)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}

// Pop function
int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int main()
{
    int num, temp, digit;
    int reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Special case: if number is 0
    if (num == 0)
    {
        printf("Palindrome number\n");
        return 0;
    }

    // Push digits into stack
    while (temp > 0)
    {
        digit = temp % 10;
        push(digit);
        temp = temp / 10;
    }

    // Reset temp to original number
    temp = num;

    // Compare digits using stack
    while (temp > 0)
    {
        digit = temp % 10;

        if (digit != pop())
        {
            printf("Not a palindrome number\n");
            return 0;
        }

        temp = temp / 10;
    }

    printf("Palindrome number\n");

    return 0;
}