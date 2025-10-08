
// #include <stdio.h>
// int f(int *t, int x)
// {
//     int a, b, mid;
//     a = 0;
//     b = sizeof (t);
//     while (a <= b)
//     {
//     mid = (b + a) / 2;
//     if (t[mid] == x)
//     return 'a';
//     if (t[mid] < x)
//     a = mid + 1;
//     else
//     b = mid - 1;
//     }
//     return 'b';
// }

// int main ()
// {
//     int t[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11 };
//     printf ("%d", f (t, 7));
// }












// #include <stdio.h>

// int main() {
//     int R, P, X, S;
//     P = 1;
//     S = 0;

//     printf("Entrer X : ");
//     scanf("%d", &X);

//     do {
//         R = X % 2;
//         S = S + R * P;
//         P = P * 10;
//         X = X / 2;
//     } while (X != 0);

//     printf("S = %d\n", S);

//     return 0;
// }









// #include <stdio.h>
// int main() {
// int i=1, j=4;
// float a,b,c,d;
// a = i/j;
// b = 1.0*(i/j);
// c = (1.0*i)/j;
// d = 1.0*((float)(i/j));
// printf("%.2f %.2f %.2f %.2f",a,b,c,d);
// }







// #include <stdio.h>
// #define f(a,b) a+b
// #define g(a,b) a*b
// int main(void) {
//     int Y;
//     Y = 2 * f(4, g(3,5));
//     printf("\n Y = %d", Y);
// }




// #include <stdio.h>
// main() {
//    int i=10;
//    while (i>0)
//    {
//     printf("%i\n" ,i-- );
//    }
// }

// #include <stdio.h>
// main() {
//     int x = 2, y = 5;
//     switch (x < y)
//     {
//         case 0: printf("%d", x);
//         case 1: printf("%d", y);
//         default: printf("%d", x + y);
//     }
// }




/* #include <stdio.h>
int main() {
    int n = 1 + 6 / 3 + 2 * 5;
    printf("%d", n);
    return 0;
}  */


/* int main() {
    int Tab[] = {1, 2, 3, 4};
    int S = 0;
    for(int i = 1; i < 4; i++)
        S += Tab[i];
    printf("%d", S);
    return 0;
} */


/* int main() {
    int a = 10, b = 20;
    int c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);
    return 0;
} */





/* void
f (int x)
{
    printf("%d\n", x);
}

int
main () 
{
    int x = 456;
    f (123);
    printf("%d", x);
    return 0;
} */




/* int main ()
{
    int x = 2;
    switch (x)
    {
    case 1:
    x = 4;
    case 2:
    x = 5;
    case 3:
    x = 6;
    }
    printf ("%d\n", x);
    return 0;
}  */