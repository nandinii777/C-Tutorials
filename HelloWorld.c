/*#include<stdio.h>
int sum(int n);
int main() {
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("sum is:%d\n",sum(n));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumn1=sum(n-1);
    int sumn=sumn1+n;
    return sumn;
}*/

/*#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("factorial is:%d\n",fact(n));
    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int factn=fact(n-1)*n;
    return factn;
}*/

/*#include<stdio.h>
int fib(int n);
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("fibonacci of %d is:%d\n",i,fib(i));
    }
    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibnm1=fib(n-1);
    int fibnm2=fib(n-2);
    int fibn=fibnm1+fibnm2;
    return fibn;
}*/

/*#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("Sum of %d is:%d\n",n,sum(n));
    return 0;
}
int sum(int n){
    int s=0;
    while(n!=0){
        s+=(n%10);
        n=n/10;
    }
    return s;
}*/

/*#include<stdio.h>
int main(){
    int n,i;
    float j;
    printf("enter a no.:");
    scanf("%d",&n);
    i=n;
    i=j*j;
    printf("%d",j);
    return 0;
}*/

/*#include<stdio.h>
float pw(float n, int p);
int main(){
    float n;
    int p;
    printf("Enter a no.:");
    scanf("%f",&n);
    printf("Enter it's power:");
    scanf("%d",&p);
    printf("power of %.2f raised to %d is:%f\n",n,p,pw(n,p));
    return 0;
}
float pw(float n, int p){
    float s=1.0;
    for(int i=1;i<=p;i++){
        s=s*n;
    }
    return s;
}*/

/*#include<stdio.h>
int gcd(int a, int b);
int main(){
    int a,b;
    printf("Enter two positive integers:");
    scanf("%d %d",&a,&b);
    if(a<0||b<0){
        printf("Enter positive integers!");
        return 1;
    }
    printf("Greatest Common Divisor of %d & %d is:%d",a,b,gcd(a,b));
    return 0;
}
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}*/

/*#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("Sum of first %d natural no.s:%d",n,sum(n));
    return 0;
}
int sum(int n){
    if (n==1){
        return 1;
    }
    int s=n+sum(n-1);
    return s;
}*/

/*#include<stdio.h>
int rev(int n);
int main(){
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("Reversed no.:%d",rev(n));
    return 0;
}
int rev(int n){
    int s=0;
    while(n!=0){
        int rem=n%10;
        s=s*10+rem;
        n=n/10;
    }
    return s;
}*/

/*#include<stdio.h>
void display(int arr[],int n);
int main(){
    int n;
    printf("Here's an array of 10 integers-:\n[76,87,32,56,2,62,15,37,93,73]\nEnter how many numbers you want to display:");
    scanf("%d",&n);
    int arr[]={76,87,32,56,2,62,15,37,93,73};
    if(n<=10&&n>0){
        display(arr,n);
    }
    else{
        printf("Wrong Input\n");
    }
    return 0;
}
void display(int arr[], int n){
    printf("Elements in reversed order:  ");
    for(int i=n-1;i>=0;i--){
       // printf("%d\t",arr[i]);
       printf("%d\t",*(arr+i));
    }
}*/

/*#include<stdio.h>
int main(){
    int n,m;
    printf("Let's create an array of integers:\nHow many numbers you want in your array?");
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++){
        printf("Enter the no. you want to insert at index %d:",i);
        //scanf("%d",&arr[i]);
        scanf("%d",arr+i);
    }
    printf("Here's your array!\n");
    printf("[\t");
    for(int i=0;i<m;i++){
        printf("%d\t",arr[i]);
    }
    printf("]\n");
    printf("Yay! You created your array...!");
    return 0;
}*/

/*#include<stdio.h>
void sqr(int arr[], int m);
void insrt(int m, int arr[]);
void insrt(int m,int arr[]){
    for(int i=0;i<m;i++){
        printf("Enter the no. you want to insert at index %d:",i);
        //scanf("%d",&arr[i]);
        scanf("%d",arr+i);
    }
}
void sqr(int arr[],int m){
    printf("Square of array elements:\n");
    for(int i=0;i<m;i++){
        printf("%d\t",arr[i]*arr[i]);
    }
}
int main(){
    int m;
    printf("How many numbers you want in your array?");
    scanf("%d",&m);
    int arr[m];
    insrt(m,arr);
    sqr(arr,m);
    return 0;
}*/

/*#include<stdio.h>
void sum(int arr[], int m,int *ptr);
void insrt(int m, int arr[]);
void insrt(int m,int arr[]){
    for(int i=0;i<m;i++){
        printf("Enter the no. you want to insert at index %d: ",i);
        //scanf("%d",&arr[i]);
        scanf("%d",arr+i);
    }
}
void sum(int arr[],int m,int *ptr){
    for(int i=0;i<m;i++){
        *ptr+=arr[i];
    }
}
int main(){
    int m,s=0;
    printf("How many numbers you want in your array? ");
    scanf("%d",&m);
    int arr[m];
    insrt(m,arr);
    int *ptr=&s;
    sum(arr,m,&s);
    printf("Sum of array elements:%d\n",s);
    return 0;
}*/

/*#include<stdio.h>
void uni(int arr1[], int arr2[], int m, int n);
void insrt(int m, int arr[]);
void inter(int arr1[], int arr2[], int m, int n);
void inter(int arr1[], int arr2[], int m, int n){
    printf("Intersection of two arrays:\n[\t");
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            if(arr2[j]==arr1[i]){
                printf("%d\t",arr2[j]);
            }
        }
    }
    printf("]\n");
}
void insrt(int m,int arr[]){
    for(int i=0;i<m;i++){
        printf("Enter the no. you want to insert at index %d: ",i);
        //scanf("%d",&arr[i]);
        scanf("%d",arr+i);
    }
}
void uni(int arr1[], int arr2[], int m, int n){
    printf("Union of two arrays:\n[\t");
    int i=0, j=0;
    for(i=0;i<m;i++){
        printf("%d\t",arr1[i]);
    }
    for(j=0;j<n;j++){
        int c=0;
        for(i=0;i<m;i++){
            if(arr2[j]!=arr1[i]){
                c+=1;
            }
        }
        if(c==m){
            printf("%d\t",arr2[j]);
        }
    }
    printf("]\n");
}
int main(){
    int m,n;
    printf("Insertion of elements in array1\n(No duplicate elements allowed!)\nHow many numbers you want in your array1? ");
    scanf("%d",&m);
    int arr1[m];
    insrt(m,arr1);
    printf("Insertion of elements in array2\n(No duplicate elements allowed!)\nHow many numbers you want in your array2? ");
    scanf("%d",&n);
    int arr2[n];
    insrt(n,arr2);
    uni(arr1, arr2, m, n);
    inter(arr1, arr2, m, n);
    return 0;
}*/

/*#include<stdio.h>
void swap(int *m, int *n);
void swap(int *m, int *n){
    int t=*m;
    *m=*n;
    *n=t;
}
int main(){
    int m,n;
    printf("Enter two integers:");
    scanf("%d %d",&m,&n);
    printf("Original value of 1st int: %d\n",m);
    printf("Original value of 2nd int: %d\n",n);
    int *ptr=&m;
    int *ptrr=&n;
    swap(ptr, ptrr);
    printf("Swapped value of 1st int: %d\n",m);
    printf("Swapped value of 2nd int: %d\n",n);
    return 0;
}*/

/*#include<stdio.h>
void avg(float arr[], int m,float *ptr);
void insrt(int m, float arr[]);
void insrt(int m,float arr[]){
    for(int i=0;i<m;i++){
        printf("Enter the no. you want to insert at index %d: ",i);
        //scanf("%d",&arr[i]);
        scanf("%f",arr+i);
    }
}
void avg(float arr[],int m,float *ptr){
    for(int i=0;i<m;i++){
        *ptr+=arr[i];
    }
    *ptr=*ptr/m;
}
int main(){
    int m;
    float s=0;
    printf("How many numbers you want in your array? ");
    scanf("%d",&m);
    float arr[m];
    insrt(m,arr);
    float *ptr=&s;
    avg(arr,m,&s);
    printf("Mean of array elements:%f\n",s);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    char name[6];
    for(int i=0;i<5;i++){
        printf("Enter character:");
        scanf(" %c",&name[i]);
    }
    for(int i=0;i<5;i++){
        printf("%c",name[i]);
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    char name[20];
    printf("Enter ur name:");
    scanf("%s",name);
    printf("%s",name);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    char name[200];
    printf("Enter ur name:");
    gets(name);
    puts(name);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    char name[200],city[30],cont[20];
    char l[3];
    printf("Enter ur name:");
    fgets(name,200,stdin);
    puts(name);
    printf("Enter ur city:");
    scanf("%s",city);
    printf("%s\n",city);
    printf("Enter ur country: ");
    fgets(cont, 30,stdin);
    printf("%s",cont);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    char sent[100];
    printf("Enter a sentence:");
    //scanf("%s",sent);
    fgets(sent,100,stdin);
    int count=0;
    int m=5;
    for(int i=0;sent[i]!='\0';i++){
        count++;
    }
    printf("Length of the sentence is: %d",count-1);
    return 0;
}*/

/*#include<stdio.h>
int count(char *sent);
int count(char *sent){
    int c=0;
    while(*sent!='\0'){
        c++;
        sent++;
    }
    return c-1;
}
int main(){
    char sent[400];
    printf("Enter a sentence:");
    fgets(sent,400,stdin);
    printf("The length of the string is: %d\n",count(sent));
    return 0;
}*/

/*#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void insertionSort(int arr[], int n) {
    int i, key, j;
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main() {
    int n, i, arr[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    bubbleSort(arr, n);
    printf("Bubble Sorted Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    insertionSort(arr, n);
    printf("\nInsertion Sorted Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}*/

/*#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);
    printf("Reversed string: ");
    for(i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}*/

/*#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
int main() {
    struct Student s[10];
    int i, maxMarks = -1, pos = 0;
    printf("Enter name and marks of 10 students:\n");
    for(i = 0; i < 10; i++) {
        printf("\nStudent %d name: ", i + 1);
        scanf("%s", s[i].name);
        printf("Student %d marks: ", i + 1);
        scanf("%d", &s[i].marks);
        if(s[i].marks > maxMarks) {
            maxMarks = s[i].marks;
            pos = i;
        }
    }
    printf("\nStudent with highest marks: %s (%d marks)", s[pos].name, s[pos].marks);
    return 0;
}*/

/*#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Student {
    char name[50];
    int marks;
    struct Date dob;
};
int main() {
    struct Student s[10];
    int i, maxMarks = -1, pos = 0;
    printf("Enter details of 10 students (name, marks, dob as dd mm yyyy):\n");
    for(i = 0; i < 10; i++) {
        printf("\nStudent %d name: ", i + 1);
        scanf("%s", s[i].name);
        printf("Student %d marks: ", i + 1);
        scanf("%d", &s[i].marks);
        printf("Student %d date of birth (dd mm yyyy): ", i + 1);
        scanf("%d %d %d", &s[i].dob.day, &s[i].dob.month, &s[i].dob.year);
        if(s[i].marks > maxMarks) {
            maxMarks = s[i].marks;
            pos = i;
        }
    }
    printf("\nTopper: %s", s[pos].name);
    printf("\nMarks: %d", s[pos].marks);
    printf("\nDate of Birth: %02d-%02d-%04d", s[pos].dob.day, s[pos].dob.month, s[pos].dob.year);
    return 0;
}*/

/*#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    fp = fopen("sample.txt", "w");
    if(fp == NULL) {
        printf("Error opening file for writing.");
        return 1;
    }
    printf("Enter text to write to file (end with #):\n");
    while((ch = getchar()) != '#') {
        fputc(ch, fp);
    }
    fclose(fp);
    fp = fopen("sample.txt", "r");
    if(fp == NULL) {
        printf("Error opening file for reading.");
        return 1;
    }
    printf("\nContents of file:\n");
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}*/

/*#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    char ch;
    fp = fopen("alphabet.txt", "w");
    if(fp == NULL) {
        printf("Error opening file for writing.");
        return 1;
    }
    for(ch = 'A'; ch <= 'Z'; ch++) {
        fputc(ch, fp);
    }
    fclose(fp);
    fp = fopen("alphabet.txt", "r");
    if(fp == NULL) {
        printf("Error opening file for reading.");
        return 1;
    }
    printf("Characters in lowercase:\n");
    while((ch = fgetc(fp)) != EOF) {
        printf("%c ", tolower(ch));
    }
    fclose(fp);
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
struct address{
    int hn;
    int b;
    char city[40];
    char state[50];
}add;
int main(){
    struct address add[5];
    printf("Enter details of 1st student:\n");
    scanf("%d",&add[0].hn);
    scanf("%d",&add[0].b);
    scanf("%s",add[0].city);
    scanf("%s",add[0].state);

    printf("%d\n",add[0].hn);
    printf("%d\n",add[0].b);
    printf("%s\n",add[0].city);
    printf("%s\n",add[0].state);
    return 0;
}*/

// #include<stdio.h>
// #include<string.h>
// struct address{
//     int hn;
//     char b;
//     char city[40];
//     char state[50];
// };
// void scan(struct address *add);
// void scan(struct address *add){
//     printf("House no.:");
//     scanf("%d",&add->hn);
//     printf("Block no.:");
//     scanf(" %c",&(*add).b);
//     printf("City:");
//     scanf("%s",&add->city);
//     printf("State:");
//     scanf("%s",(*add).state);
// }
// void print(struct address add);
// void print(struct address add){
//     printf("House no.=>%d\n",add.hn);
//     printf("Block no.=>%c\n",add.b);
//     printf("city=>%s\n",add.city);
//     printf("State=>%s\n",add.state);
// }
// int main(){
//     struct address add[5];
//     printf("Enter details of student 1:\n");
//     scan(&add[0]);
//     // printf("Enter details of student 2:\n");
//     // scan(&add[1]);
//     // printf("Enter details of student 3:\n");
//     // scan(&add[2]);
//     // printf("Enter details of student 4:\n");
//     // scan(&add[3]);
//     // printf("Enter details of student 5:\n");
//     // scan(&add[4]);
//     printf("Details of student 1 are:\n");
//     print(add[0]);
//     // printf("Details of student 2 are:\n");
//     // print(add[1]);
//     // printf("Details of student 3 are:\n");
//     // print(add[2]);
//     // printf("Details of student 4 are:\n");
//     // print(add[3]);
//     // printf("Details of student 5 are:\n");
//     // print(add[4]);
//     return 0;
// }

/*#include<stdio.h>
struct student{
    int roll;
    int admn;
    char name[100];
    char grade;
    float cgpa;
};
int main(){
    struct student s1[2]={{23,1465,"Rohan",'A',8.1},{0}};
    printf("%d %d %s %c %f\n",s1[0].roll, s1[0].admn, s1[0].name, s1[0].grade, s1[0].cgpa);
    return 0;
}*/

/*#include<stdio.h>
typedef struct student{
    int roll;
    int admn;
    char name[100];
    char grade;
    float cgpa;
}stu;
int main(){
    stu s1={23,1465,"Rohan",'A',8.1};
    printf("%d %d %s %c %f\n",s1.roll, s1.admn, s1.name, s1.grade, s1.cgpa);
    stu s2[2];
    s2[0].cgpa=9.1;
    printf("cgpa of s1: %f\n",s2[0].cgpa);
    return 0;
}*/

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[60];
//     name="lala";
//     char pipi[60]="lala";
//     pipi="lala";
//     char *name1;
//     name1="lala";
//     strcpy(name1,"heyyy");
//     printf("%s",name1);
//     char *name2="hahaha";
//     name2="lala";
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int m;
//     printf("Enter the size of array\n(Enter a positive integer) :");
//     scanf("%d",&m);
//     if(m<=0){
//         printf("Enter a positive integer!!\n");
//         return 0;
//     }
//     int arr[m];
//     int freq[m];
//     for(int i=0;i<m;i++){
//         printf("Enter the element at index %d:",i);
//         scanf("%d",arr+i);
//     }
//     for(int i=0;i<m;i++){
//         freq[i]=1;
//     }
//     for(int i=0;i<m;i++){
//         if(freq[i]!=-1){
//             for(int j=i+1;j<m;j++){
//                 if(arr[i]==arr[j]){
//                     freq[i]+=1;
//                     freq[j]=-1;
//                 }
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         if(freq[i]>0){
//             printf("Element %d occured %d times at:\nIndex %d",arr[i],freq[i],i);
//             if(freq[i]!=1){
//                 for(int j=i+1;j<m;j++){
//                     if(arr[i]==arr[j]){
//                         printf(", Index %d",j);
//                     }
//                 }
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the size of array\n(Enter a positive integer) :");
    scanf("%d",&m);
    if(m<=0){
        printf("Enter a positive integer!!\n");
        return 0;
    }
    int arr[m];
    for(int i=0;i<m;i++){
        printf("Enter the element at index %d:",i);
        scanf("%d",arr+i);
    }
    printf("Enter the element you want to search:");
    scanf("%d",&n);
    int c=0;
    for(int i=0;i<m;i++){
        if(n==arr[i]){
            c+=1;
        }
    }
    if(c==0){
        printf("Element %d doesn't exists in the array!\n");
        return 0;
    }
    printf("Element %d occurred %d times at:\n",n,c);
    for(int i=0;i<m;i++){
        if(n==arr[i]){
            printf("Index %d  ",i);
        }
    }
    printf("\n");
    return 0;
}