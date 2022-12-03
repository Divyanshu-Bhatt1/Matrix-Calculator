#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//prototype for print_line function
// this fx is used to print line
void print_line();


//prototype for impotant function
// this fx is used to print rules
void important();


// prototype for add function
// this fx is used to adding 2 matrix
void add(int m,int n,int arr1[][n],int a,int b,int arr2[][b]);


//prototype for subtracting function
// this fx is used to subtracting 2 matrix
void sub(int m,int n,int arr1[][n],int a,int b,int arr2[][b]); 

//prototype for subtracting function
// this fx is used to subtracting 2 matrix
void mul(int m,int n,int arr1[][n],int a,int b,int arr2[][b]);
int main()
{
    // here we get "a" as no. of lines in matrix and "b" as no. of things write in one line
    // op means operation like "+" "-" "*"
     int a,b,c,d;
     char op;

     print_line();
     important();
     print_line();

     
     printf("\n\nWhich operation do you like to perform (+,-,*)=\n");
     op=getchar();
     
     
    printf("enter the row and column for 1st matrix=");
    scanf("%d %d",&a,&b);
    printf("\nenter the row and column for 2nd matrix=");
    scanf("%d %d",&c,&d);
    
    int arr1[a][b];
    int arr2[c][d];


 // check operation is valid or not
    if( op == '+' || op == '*' || op == '-')
     {
        printf("\n---\n");
     }else{
        goto end;
     }
    


 // check for sum fx condition
 if(op=='+')
 {
    if( a==c && b==d && c == a && d == b )
        {
          printf("\n...\n");
        }else{
            goto end;
        }
 }
    


 // check for sub fx condition
 if(op=='-')
 {
    if( a==c && b==d && c == a && d == b )
        {
          printf("\n...\n");
        }else{
            goto end;
        }
 }


 // check for mul fx condtiton
if(op=='*')
{
    if(c==b && b==c)
        { 
            printf("\n...\n");
        }else{
            goto end;
        }
}


    printf("\nenter the elements of 1st matrix:\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("\n");
     
    printf("\nenter the elements of 2nd matrix=\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }




   // print them
   printf("\n");
   printf("the 1st matrix is given below:\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
    printf("the 2nd matrix is given below:\n");
     for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
        
    }

    // condition to call add function
    if(op=='+')
    {
          add(a,b,arr1,c,d,arr2);
    }
    
    // condition to call sub function
    if(op=='-')
    {   
          sub(a,b,arr1,c,d,arr2);
    }

    // condition to call mul function
    if(op=='*')
    {     
            mul(a,b,arr1,c,d,arr2);
    }

    // label end
    // this if statement is just nothing you can ignore it
    if(5!=5)
    {
     end:
         print_line();
         printf("\nSorry you break the rule and please read rules carefully\n");
         print_line();
    }
   
}


// definition of fx print_line
void print_line()
{
    for(int i=0;i<80;i++)
    {
        printf("--");
    }
}


// definition of fx important
void important()
{
    printf("\n There are some rule for matrix which is given below:\n");
    printf("\n  RULE NO.1 :  if you wanted to perform operation ' + ' or ' - ' then take row and column of both matrix be same \n");
    printf("\n  RULE NO.2 :  if you wanted to perform operation ' * ' then you can take row and column of both matrix be different \n");
    printf("                 but the condition is that here you should be take coulmn of 1st matrix and the row of 2nd matrix  same\n");
    
}


// definition of fx add
void add(int m,int n,int arr1[][n],int a,int b,int arr2[][b])
{
    int result[m][n];
    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            result[i][j]=arr1[i][j]+arr2[i][j];
        }
        printf("\n");
        
    }
     printf("\nthe sum of matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           printf("%d\t",result[i][j]);
        }
        printf("\n");
        
    }
}


// definition of fx sub
void sub(int m,int n,int arr1[][n],int a,int b,int arr2[][b])
{
    int result[m][n];
    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            result[i][j]=arr1[i][j]-arr2[i][j];
        }
        printf("\n");
        
    }
     printf("\nthe sub of matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           printf("%d\t",result[i][j]);
        }
        printf("\n");
        
    }
}


//definition for mul fx
void mul(int m,int n,int arr1[][n],int a,int b,int arr2[][b])
{
    int result[m][b];
     printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<b;j++)
        {
             result[i][j]=0;
            for(int k=0;k<n;k++)
            {
                result[i][j]=result[i][j]+(arr1[i][k]*arr2[k][j]);
            }
        }
        printf("\n");
        
    }
     printf("\nthe multiply of matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<b;j++)
        {
           printf("%d\t",result[i][j]);
        }
        printf("\n");
        
    }
}