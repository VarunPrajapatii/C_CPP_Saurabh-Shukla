// Que9
// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int a,b, x;
    printf("Enter two number: ");
    scanf("%d %d", &a,&b);
    x=(a>b?a:b);
    while(1)
    {
        if(x%a==0 && x%b==0)
        {
            printf("Lcm is %d.", x);
            break;
        }
        x++;
    }

    return 0;
}

// For bigger number this is bruteforce approach is inefficient

// LCM(a,b) = (a*b)/GCD(a,b)

// #include<stdio.h>

// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int main() {
//     int a, b, lcm;
    
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     lcm = (a * b) / gcd(a, b);
//     printf("LCM is %d.\n", lcm);

//     return 0;
// }
