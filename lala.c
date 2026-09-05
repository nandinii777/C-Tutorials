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

/*#include<stdio.h>
int main(){
    int n, num1=0, num2=1, num3, i;
    printf("Enter the no. of fibonacci no.s you want to generate:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\n",num1);
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
    double r1,r2,d,rp,ip;
    printf("enter coefficients a,b,c of your quad. eqn: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c
    if(d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf
    }
}*/

/*#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the no. whose table you want to print:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int n;
    for(;;){
        printf("Enter a no.:");
        scanf("%d",&n);
        if(n%2!=0){
            break;
        }
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int n,m=1;
    printf("Enter a no.(whose factorial u want to be printed):");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        m*=i;
    }
    printf("Factorial of %d is:%d\n",n,m);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.(whose table u want to be printed in reverse order):");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}*/

/*to print prime no.s b/w 1 to n.
#include<stdio.h>
int main(){
    int n,isprime;
    printf("Enter a no.:");
    scanf("%d",&n);
    if(n<2){
        printf("There are no prime no.s\n",n);
        return 0;
    }
    printf("Prime no.s b/w 1 & %d are:\n",n);
    for(int i=2;i<=n;i++){
        isprime=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isprime=0;
            }
            
        }
        if(isprime==1){
            printf("%d  ",i);
        }
    }
    return 0;
}*/

/*to check if a no. is prime or not.
#include<stdio.h>
int main(){
    int n,isprime=1;
    printf("Enter a no.:");
    scanf("%d",&n);
    if(n<2){
        printf("%d ain't prime.\n",n);
        return 0;
    }
    for(int j=2;j*j<=n;j++){
        if(n%j==0){
            isprime=0;
        }
    }
    if(isprime==1){
        printf("%d is a prime no.\n",n);
    }
    else{
        printf("%d is not a prime no.\n",n);
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int n,rn=0,r;
    printf("Enter a no.:");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        rn=rn*10+r;
        n=n/10;
    }
    printf("Reversed no:%d",rn);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    double n=3.87547345487;
    printf("%.2lf\n",n);
    printf("%.0lf\n",n);
    printf("%.8lf\n",n);
    printf("%10.2lf\n",n);
    printf("%8.2lf\n",n);
    printf("%-10.2lf\n",n);
    printf("%-8.2lf\n",n);
    printf("%.2f\n",n);
    printf("%.0f\n",n);
    printf("%.8f\n",n);
    printf("%10.2f\n",n);
    printf("%8.2f\n",n);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    double n=3.85,m=-8.58;
    printf("%+f\n",n);
    printf("%.10f\n",m);
    printf("%+f\n",m);
    printf("%f\n",n);
    printf("% f\n",n);
    printf("% f\n",m); 
    return 0;
}*/

/*#include<stdio.h>
int main(){
    double n=0.00000245,m=0.046400,u=78.9000,i=8.050009100,o=6785.90,t=76796.800900,r=4.09878700900767;
    printf("%g\n",n);
    printf("%g\n",m);
    printf("%g\n",u);
    printf("%g\n",i);
    printf("%g\n",r);
    printf("%e\n",n);
    printf("%e\n",o);
    printf("%e\n",t);
    printf("%e\n",m);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int i,j,n,s;
    printf("enter a no. to print diamond shape:");
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

/*#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a no.:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter a no.:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter a no.:");
    scanf("%d",&n);
    for(/*i=n;i>=1;i--i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=n;j++){
            if(j==1||j==n||i==1||i==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter a no.:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int l,b,j,i;
    printf("enter length:");
    scanf("%d",&l);
    printf("enter breadth:");
    scanf("%d",&b);
    for(i=1;i<=l;i++){
        for(j=1;j<=b;j++){
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int l,b,j,i;
    printf("enter length:");
    scanf("%d",&l);
    printf("enter breadth:");
    scanf("%d",&b);
    for(i=1;i<=l;i++){
        for(j=1;j<=b;j++){
            if(j==1||j==b||i==1||i==l){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main() {
    int n; // Represents the height of the trapezium
    int i, j, space;
    printf("Enter the number of rows for the trapezium (height): ");
    // For a good-looking trapezium, n should be at least 3
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        // 1. Print leading spaces
        // The first row (i=n) has 0 spaces.
        // Each subsequent row has one more space than the previous.
        // The number of spaces is (n - i)
        for (space = 1; space <= n - i; space++) {
            printf("  "); // Print two spaces for horizontal centering
        }

        // 2. Print stars
        // This is the number of stars for a standard inverted pyramid: (2*i - 1)
        // You can adjust this formula to change the slope of the trapezium's sides.
        // For a more rectangular top/bottom, you might use a different formula.
        for (j = 1; j <= 2 * i + (n - 2); j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}*/

/*#include<stdio.h>
int main(){
    int a,b=2;
    int x=2, y=x+2;
    int p=8,q=p;
    printf("%d",y);
    printf("%d",q);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    char a=(char) 65;
    printf("%c",a);
    int b=(int)'A';
    printf("%d",b);
    return 0;
}*/

/*#include<stdio.h>
//to calculate n no. of fibonacci series
int fact(int n);
int fact(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int f=fact(n-1)+fact(n-2);
    return f;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d",fact(i));
    }
    return 0;
}*/

/*//char to ascii code n vice versa lalala...
#include<stdio.h>
int main(){
    int a=(int)'A';
    char b=(char) 66;
    printf("%d\n",a);
    printf("%c\n",b);
    int p=68;
    char q='u';
    printf("%c\n",p);
    printf("%d\n",q);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int arr[5];
    /*for(int i=0;i<5;i++){
        printf("Enter element at %d index:",i);
        scanf("%d",arr+i);
    }
    for(int i=0;i<5;i++){
        printf("element at index %d is %d\n",i,arr[i]);
    }
    int *ptr=arr;
    printf("%u\n",arr);
    printf("%u\n",ptr);
    return 0;
}*/

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[100];
//     fgets(name,100,stdin);
//     int l=strlen(name);
//     printf("%d",l);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char str[400];
//     char str1[400];
//     fgets(str,400,stdin);
//     for(int i=0,j=0;str[i]!='\0';i++){
//         if(str[i]!=' '&&str[i]!='\n'&&str[i]!='\t'){
//             str1[j]=str[i];
//             j++;
//         }
//     }
//     puts(str1);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     struct stu{
//         int roll;
//         char grade;
//         char name[100];
//         float marks;
//     };
//     struct stu s1;
//     struct stu s[2]={{23,'g',"hulla",67.8}};
//     s[0].grade='A';
//     s[1]={23,'g',"hulla",67.8};
// }

// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("lala.txt","w");
//     fprintf(fptr,"Hello my name is zuzi!");
//     fclose(fptr);
//     fptr=fopen("lala.txt","r");
//     char str[100],str1[100],str2[100],str3[100],str4[100];
//     fscanf(fptr,"%s %s %s %s %s",str,str1,str2,str3,str4);
//     printf("%s %s %s %s %s",str,str1,str2,str3,str4);
//     fclose(fptr);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("lala.txt","w");
//     fprintf(fptr,"Hello my name is zuzi!");
//     fclose(fptr);
//     fptr=fopen("lala.txt","r");
//     char ch;
//     ch=fgetc(fptr);
//     int count=0;
//     while(ch!=EOF){
//         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
//             count++;
//         }
//         ch=fgetc(fptr);
//     }
//     fclose(fptr);
//     fptr=fopen("lala.txt","w");
//     fprintf(fptr,"%d",count);
//     fclose(fptr);
//     fptr=fopen("lala.txt","r");
//     int c;
//     fscanf(fptr,"%d",&c);
//     printf("%d",c);
//     fclose(fptr);
//     return 0;
// }

#include<stdio.h>
void countfreq(int arr[],int n);
void countfreq(int arr[],int n){
    int freq[n];
    for(int i=0;i<n;i++){
        freq[i]=-1;
    }
    for(int i=0;i<n;i++){
        int count=1;
        if(freq[i]!=0){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    freq[j]=0;
                }
            }
            freq[i]=count;
        }
    }
    for(int i=0;i<n;i++){
        if(freq[i]>0){
            printf("Frequency of element %d is %d.\n",arr[i],freq[i]);
        }
    }
}
void scan(int arr[],int n);
void scan(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("Enter element at %d index:",i);
        scanf("%d",arr+i);
    }
}
int main(){
    int p;
    printf("Enter the no. elements u want in ur array:");
    scanf("%d",&p);
    int arr[p];
    scan(arr,p);
    countfreq(arr,p);
    return 0;
}