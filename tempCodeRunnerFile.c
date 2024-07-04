/*#include <iostream>
using namespace std;
int main()
{
    int temp ,x , y,*a ,*b ;
    cin>> x>>y;
    cout << x << y <<endl;
    a = &x;
    b = &y;
    
    temp = *a;
    *a = *b;
    *b = temp;

    cout << x << y;
}*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r1,c1;
    printf("Enter Dimension Of Matrix:");
    scanf("%d %d",&r1,&c1);
    int **Arr  = (int**)malloc(r1*sizeof(int*));
    for(int i=0 ; i<r1 ; i++)
    {
        Arr[i] = (int*)malloc(c1*sizeof(int));
    }

    printf("Enter Elements of Array:");
    for(int i=0 ; i<r1;i++)
    {
        for(int j=0 ; j<c1;j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }
    
    printf("Elements of Array:\n");
    for(int i=0 ; i<r1;i++)
    {
        for(int j=0 ; j<c1;j++)
        {
            printf("%d",Arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


#include <stdio.h>
#include <stdlib.h>
 int main()
 {
    int n;
  scanf("%d", &n);
  int *arr = (int*)malloc(n*sizeof(int));
  printf("Enter The Elements:");
  for(int i =0 ; i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int sum=0;
  for(int i = 0 ; i<n ;i++)
  {
    sum = sum + arr[i];
  }
  printf("%d",sum);
  free(arr);
 }