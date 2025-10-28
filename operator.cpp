#include<stdio.h>
int main()
{
    int a, b;
    char rel[3], logop[3];

    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d", &a);

    printf("ENTER THE RELATIONAL OPERATOR (>, <, >=, <=, ==, !=): ");
    scanf(" %2s", rel); // read up to 2 chars

    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d", &b);

    switch (rel[0])
    {
        case '>':
            switch (rel[1])
            {
                case '=': // ">="
                    if (a >= b) printf("%d IS GREATER THAN OR EQUAL TO %d\n", a, b);
                    else printf("%d IS NOT GREATER THAN OR EQUAL TO %d\n", a, b);
                    break;
                case '\0': // ">"
                    if (a > b) printf("%d IS GREATER THAN %d\n", a, b);
                    else printf("%d IS NOT GREATER THAN %d\n", a, b);
                    break;
                default:
                    printf("INVALID RELATIONAL OPERATOR\n");
            }
            break;
        case '<':
            switch (rel[1])
            {
                case '=': // "<="
                    if (a <= b) printf("%d IS LESS THAN OR EQUAL TO %d\n", a, b);
                    else printf("%d IS NOT LESS THAN OR EQUAL TO %d\n", a, b);
                    break;
                case '\0': // "<"
                    if (a < b) printf("%d IS LESS THAN %d\n", a, b);
                    else printf("%d IS NOT LESS THAN %d\n", a, b);
                    break;
                default:
                    printf("INVALID RELATIONAL OPERATOR\n");
            }
            break;
        case '=':
            if (rel[1] == '=') // "=="
            {
                if (a == b) printf("%d IS EQUAL TO %d\n", a, b);
                else printf("%d IS NOT EQUAL TO %d\n", a, b);
            }
            else
                printf("INVALID RELATIONAL OPERATOR\n");
            break;
        case '!':
            if (rel[1] == '=') // "!="
            {
                if (a != b) printf("%d IS NOT EQUAL TO %d\n", a, b);
                else printf("%d IS EQUAL TO %d\n", a, b);
            }
            else
                printf("INVALID RELATIONAL OPERATOR\n");
            break;
        default:
            printf("INVALID RELATIONAL OPERATOR\n");
    }

    printf("ENTER THE LOGICAL OPERATOR (&&, ||, !): ");
    scanf(" %2s", logop);

    switch (logop[0])
    {
        case '&':
            if (logop[1] == '&')
            {
                if (a > 0 && b > 0) printf("BOTH NUMBERS ARE POSITIVE\n");
                else printf("BOTH NUMBERS ARE NOT POSITIVE\n");
            }
            else
                printf("INVALID LOGICAL OPERATOR\n");
            break;
        case '|':
            if (logop[1] == '|')
            {
                if (a > 0 || b > 0) printf("AT LEAST ONE NUMBER IS POSITIVE\n");
                else printf("BOTH NUMBERS ARE NOT POSITIVE\n");
            }
            else
                printf("INVALID LOGICAL OPERATOR\n");
            break;
        case '!':
            if (logop[1] == '\0') // "!"
            {
                if (!(a > 0)) printf("FIRST NUMBER IS NOT POSITIVE\n");
                else printf("FIRST NUMBER IS POSITIVE\n");
                if (!(b > 0)) printf("SECOND NUMBER IS NOT POSITIVE\n");
                else printf("SECOND NUMBER IS POSITIVE\n");
            }
            else
                printf("INVALID LOGICAL OPERATOR\n");
            break;
        default:
            printf("INVALID LOGICAL OPERATOR\n");
    }

    printf("BITWISE AND = %d\n", a & b);
    printf("BITWISE OR  = %d\n", a | b);
    printf("BITWISE XOR = %d\n", a ^ b);
    printf("LEFT SHIFT FIRST NUMBER BY 1  = %d\n", a << 1);
    printf("RIGHT SHIFT FIRST NUMBER BY 1 = %d\n", a >> 1);

    a++;
    b--;
    printf("INCREMENTED FIRST NUMBER  = %d\n", a);
    printf("DECREMENTED SECOND NUMBER = %d\n", b);

    a += 5;
    b -= 5;
    printf("FIRST NUMBER AFTER ADDING 5    = %d\n", a);
    printf("SECOND NUMBER AFTER SUBTRACTING 5 = %d\n", b);

    return 0;
}