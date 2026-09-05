/*#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter a no.:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter a no.:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%C ",j+64);
            }else{
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int n,i,j,s;
    printf("Enter a no.:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(s=1;s<=n-i;s++){
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>

int main() {
    int n, i, j, s;
    printf("Enter a no.:");
    scanf("%d", &n);

    // 1. Upper Half of the Diamond (Pyramid)
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (s = 1; s <= n - i; s++) {
            printf(" "); // Print a single space for better alignment
        }

        // Print stars and internal spaces
        for (j = 1; j <= 2 * i - 1; j++) {
            // Condition to print a star:
            // 1. First star of the row (j == 1)
            // 2. Last star of the row (j == 2 * i - 1)
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" "); // Print a space inside the pattern
            }
        }
        printf("\n");
    }

    // 2. Lower Half of the Diamond (Inverted Pyramid)
    // Starts from n-1 to exclude the middle line (which is handled by the upper half)
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (s = 1; s <= n - i; s++) {
            printf(" "); // Print a single space
        }

        // Print stars and internal spaces
        for (j = 1; j <= 2 * i - 1; j++) {
            // Condition to print a star (same logic as the upper half):
            // 1. First star of the row (j == 1)
            // 2. Last star of the row (j == 2 * i - 1)
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" "); // Print a space inside the pattern
            }
        }
        printf("\n");
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int n; // Stores the number of rows/side length of the rhombus
    int i, j;

    printf("Enter the number of rows for the Solid Rhombus: ");
    scanf("%d", &n);

    // Outer loop for the rows (from 1 to n)
    for (i = 1; i <= n; i++) {

        // Inner loop 1: Print leading spaces
        // The number of spaces is (n - current row number)
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Inner loop 2: Print stars
        // The number of stars is constant (equal to n) for every row
        for (j = 1; j <= n; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int n; // Stores the number of rows/side length of the rhombus
    int i, j;

    printf("Enter the number of rows for the Hollow Rhombus: ");
    scanf("%d", &n);

    // Outer loop for the rows (from 1 to n)
    for (i = 1; i <= n; i++) {

        // Inner loop 1: Print leading spaces
        // The number of spaces is (n - current row number)
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Inner loop 2: Print stars or spaces for the content
        for (j = 1; j <= n; j++) {
            // Check if the current position is on the border
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*"); // Print a star on the border
            } else {
                printf(" "); // Print a space inside
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}*/

/*#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0){
        printf("%d is a positive number.",n);
    }
    else if(n<0){
        printf("%d is a negative number.",n);
    }
    else{
        printf("Zero");
    }
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int n, num1=0, num2=1, num3, count=0;
    printf("Enter the no. of fibonacci numbers you want to generate:");
    scanf("%d",&n);
    printf("Fibonacci Series: \n");
    for(count=0; count<n;count++){
        printf("%d \n",num1);
        num3=num1+num2;
        num1=num2;
        num2=num3;
    }
    return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    double d, r1, r2, rp, ip;
    printf("Enter coefficients a,b & c of the quadratic eqn:");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0){
       r1=(-b+sqrt(d))/(2*a);
       r2=(-b-sqrt(d))/(2*a);
       printf("Roots are real and distinct.\n");
       printf("Root1=%.2lf\n",r1);
       printf("Root2=%.2lf\n",r2);
    }else if(d==0){
        r1=r2=-b/(2*a);
        printf("Roots are real and equal.\n");
        printf("Root1=Root2=%.2lf\n",r1);
    }else{
        rp=-b/(2*a);
        ip=sqrt(-d)/(2*a);
        printf("Roots are complex and conjugate.\n");
        printf("Root1=%.2lf+%.2lfi\n",rp,ip);
        printf("Root2=%.2lf-%.2lfi\n",rp,ip);
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int n,i,j,isprime;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    if(n<2){
        printf("There are no prime no.s b/w 1 to %d.\n",n);
        return 0;
    }
    printf("The prime no.s b/w 1 to %d are:\n",n);
    for(i=2;i<=n;i++){
        isprime=1;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            printf("%d\n",i);
        }
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    float radius;
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    printf("The area of the circle is: %f \n", 3.14 * radius * radius);
    printf("The diameter of the circle is: %f \n", radius*2);
    printf("The circumference of the circle is: %f \n", 2*3.14*radius);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    printf("Original value of x: %d \n",x);
    printf("Original value of y: %d \n",y);
    x=x+y;
    y=x-y;
    printf("Swapped value of y: %d \n",y);
    printf("Swapped value of x: %d \n",x-y);
    return 0;
}

/*#include <stdio.h>
int main(){
    int x,y,m;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    printf("Original value of x: %d \n",x);
    printf("Original value of y: %d \n",y);
    m=x;
    x=y;
    y=m;
    printf("Swapped value of y: %d \n",y);
    printf("Swapped value of x: %d \n",x);
    return 0;
}*/

/*#include <stdio.h>
#include <math.h>
int main()
{
    float radius;
    printf("Enter the radius of the sphere:");
    scanf("%f", &radius);
    printf("The volume of the sphere is: %f \n",(4.0/3.0)*3.14*(pow(radius,3)));
    return 0;
}*/

/*#include <stdio.h>
#include<math.h>
int main(){
    int i;
    printf("What do you want to calculate? \n 1. Volume of cube \n 2. Volume of cuboid \n Choose(1 or 2) \n");
    printf("Enter your choice:");
    scanf("%d",&i);
    if(i==1){
        float a;
        printf("Enter the side of the cube:");
        scanf("%f",&a);
        printf("The volume of the cube is: %f",pow(a,3));
    }
    else if(i==2){
        float l,b,h;
        printf("Enter the length of the cuboid:");
        scanf("%f",&l);
        printf("Enter the breadth of the cuboid:");
        scanf("%f",&b);
        printf("Enter the height of the cuboid:");
        scanf("%f",&h);
        printf("The volume of the cuboid is: %f",l*b*h);
    }
    else{
        printf("Wrong choice!");
    }
    return 0;
}*/

// printf("Hello World");

/*int side;
printf("Enter the side of the square:");
scanf("%d",&side);
printf("The area of the square is: %d",side*side);


float radius;
printf("Enter the radius of the circle:");
scanf("%f",&radius);
printf("The area of the circle is: %f",3.14*radius*radius);
 return 0;


char name[30], address[100];
 printf("Enter your name:");
 fgets(name,30,stdin);
 printf("Enter your address:");
 scanf("%s", &address);
 printf("Your name is %s", name);
 printf("Your address is %s \n", address);
 return 0;


  int P, R, T, n, i;
    printf("what do you want to calculate?\n 1.Simple Interest\n 2.Compound Interest\n (Choose 1 or 2)\n");
    scanf("%d", &i);
    if (i == 1)
    {
        printf("Enter principle: ");
        scanf("%d", &P);
        printf("Enter rate:");
        scanf("%d", &R);
        printf("Enter time:");
        scanf("%d", &T);
        printf("Simple Interest: %f", (P*R*T)/100.0);
    }

    else if (i == 2)
    {
        printf("Enter principle:");
        scanf("%d", &P);
        printf("Enter rate:");
        scanf("%d", &R);
        printf("Enter time:");
        scanf("%d", &T);
        printf("Enter no. of times interest is compounded:");
        scanf("%d", &n);
        printf("Compound Interest: %lf", P*(pow((1+R/n), (n*T))));
    }
    else
    {
        printf("error");
    }
    return 0;
}*/

/*#include <stdio.h>
#include <math.h>
int main(){
    float x;
    int y;
    printf("Enter 1st no.:");
    scanf("%f", &x);
    printf("Enter 2nd no.:");
    scanf("%d", &y);
    printf("%f\n",x*x);
    printf("%f\n",pow(x,y));
    printf("%f\n",sqrt(x));
    return 0;
}*/

/*#include <stdio.h>
#include <math.h>
int a(int a, int b);
int s(int a, int b);
int m(int a, int b);
int d(float a, float b);
float rem(int a, int b);
float power(int a, int b);
float sqr(float a);
float sqroot(int a);
int main(){
    while (1){
        printf("Welcome to the calculator!\n");
        printf("What do you want to calculate?\n1.Sum\t2.Difference\t3.Product\t4.Quotient\t5.Remainder\t6.Square\t7.Power\t8.Square root\t9.Exit\n");
        int i, x, y;
        printf("Enter your choice:");
        scanf("%d", &i);
        if(i==9){
            break;
        }
        printf("Enter 1st no.:");
        scanf("%d", &x);
        printf("Enter 2nd no.:");
        scanf("%d", &y);
        switch (i)
        {
        case 1:
            a(x, y);
            break;
        case 2:
            s(x, y);
            break;
        case 3:
            printf("Product:%d\n", m(x, y));
            break;
        case 4:
            d(x, y);
            break;
        case 5:
            printf("Remainder:%f\n", rem(x, y));
            break;
        case 6:
            sqr(x);
            break;
        case 7:
            printf("Power:%.2f\n", power(x, y));
            break;
        case 8:
            sqroot(x);
            break;
        default:
            printf("Wrong input. Try again!\n");
            break;
        }
    }
    return 0;
}
int a(int a, int b)
{
    int s = a + b;
    printf("Addition:%d\n", s);
}
int s(int a, int b)
{
    int d = a - b;
    printf("Substraction:%d\n", d);
}
int d(float a, float b)
{
    float d = a / b;
    printf("Division:%f\n", d);
}
int m(int a, int b)
{
    int m = a * b;
    return m;
}
float rem(int a, int b)
{
    float r = a % b;
    return r;
}
float power(int a, int b)
{
    float p = pow(a, b);
    return p;
}
float sqr(float a)
{
    float s = a*a;
    printf("Square:%f\n",s);
}
float sqroot(int a)
{
    float m = sqrt(a);
    printf("Square root:%f\n", m);
}*/

/*#include <stdio.h>
#include <math.h>

// Function Prototypes (Updated to use 'void' where necessary)
void a(int a, int b);
void s(int a, int b);
int m(int a, int b);
void d(float a, float b);
int rem(int a, int b); // Remainder should return int
float power(int a, int b);
void sqr(float a); // Changed to void
void sqroot(int a); // Changed to void

int main(){
    while (1){
        printf("Welcome to the calculator!\n");
        printf("What do you want to calculate?\n1.Sum\t2.Difference\t3.Product\t4.Quotient\t5.Remainder\t6.Square\t7.Power\t8.Square root\t9.Exit\n");
        int i, x, y;
        printf("Enter your choice:");
        if (scanf("%d", &i) != 1) { // Basic input validation
            printf("Invalid choice. Exiting.\n");
            break;
        }

        if(i==9){
            break;
        }
        
        // Only ask for 2nd number if needed
        int need_two_nums = (i >= 1 && i <= 5) || i == 7;

        printf("Enter 1st no.:");
        scanf("%d", &x);
        
        if (need_two_nums) {
            printf("Enter 2nd no.:");
            scanf("%d", &y);
        } else {
            // For operations that only need one number (6, 8)
            y = 0; // Initialize y, although it won't be used
        }

        switch (i)
        {
        case 1:
            a(x, y);
            break;
        case 2:
            s(x, y);
            break;
        case 3:
            printf("Product:%d\n", m(x, y));
            break;
        case 4:
            // Explicitly cast to float for division
            d((float)x, (float)y);
            break;
        case 5:
            // Print remainder as int, since it's an int operation
            printf("Remainder:%d\n", rem(x, y));
            break;
        case 6:
            // Explicitly cast to float for square
            sqr((float)x); 
            break;
        case 7:
            printf("Power:%.2f\n", power(x, y));
            break;
        case 8:
            sqroot(x);
            break;
        default:
            printf("Wrong input. Try again!\n");
            break;
        }
    }
    return 0;
}

// Function Definitions (Updated)

void a(int a, int b) // Changed return type to void
{
    int s = a + b;
    printf("Addition:%d\n", s);
}

void s(int a, int b) // Changed return type to void
{
    int d = a - b;
    printf("Substraction:%d\n", d);
}

void d(float a, float b) // Changed return type to void
{
    // Basic check to prevent division by zero
    if (b == 0.0f) {
        printf("Division: Error (Division by zero)\n");
        return;
    }
    float div_result = a / b;
    printf("Division:%.2f\n", div_result);
}

int m(int a, int b)
{
    int prod = a * b; // Renamed local variable
    return prod;
}

int rem(int a, int b) // Changed return type to int
{
    // Basic check to prevent modulus by zero
    if (b == 0) {
        printf("Error: Modulo by zero\n");
        return 0;
    }
    int r = a % b;
    return r;
}

float power(int a, int b)
{
    float p = pow(a, b);
    return p;
}

void sqr(float a) // Changed return type to void
{
    float s = a*a;
    printf("Square:%.2f\n",s);
}

void sqroot(int a) // Changed return type to void
{
    // Check for negative input
    if (a < 0) {
        printf("Square root: Error (Negative input)\n");
        return;
    }
    float m = sqrt(a);
    printf("Square root:%.2f\n", m);
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[400];
    printf("Enter a string:");
    fgets(str,400,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            int c=(int)str[i];
            c=c-32;
            str[i]=(char)c;
        }
    }
    puts(str);
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[400];
    printf("Enter a string:");
    fgets(str,400,stdin);
    int i,j;
    for(i=0,j=0;str[i]!='\0';i++){
        if(str[i]!=' '&&str[i]!='\n'){
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    puts(str);
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[400];
    printf("Enter a string:");
    fgets(str,400,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=97&&str[i]<=122){
            int c=(int)str[i];
            c=c-32;
            str[i]=(char)c;
        }
        else if(str[i]>=65&&str[i]<=90){
            int c=(int)str[i];
            c=c+32;
            str[i]=(char)c;
        }
    }
    puts(str);
    return 0;
}*/

