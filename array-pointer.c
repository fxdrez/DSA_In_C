// Pointer And Array
// Pointer is the variable that store the address of another variable
// Array and pointer are closely related, but they have distinct behaviors and uses.

#include<stdio.h>
int main(){
  int a[]={1,2,3,4,5};
  int *ptr;
  ptr = a;
  printf("\n%p",a); // 0061FF08
  printf("\n%p",ptr); // 0061FF08
  printf("\n%d",*a); // 1
  printf("\n%d",*ptr); // 1
  ptr++;
  printf("\n%p",ptr); // 0061FF0C
  printf("\n%p",&a[0]+1); // 0061FF0C
  printf("\n%d",*ptr); // 2
  printf("\n%d",*(a+1)); // 2
  printf("\n%d",a[1]); // 2
  printf("\n%d",*a+1); // 2
  printf("\n%d",*(ptr+1));
  printf("\n%p", &a+1); // 0061FF1C -- last address + 1 int i.e. 4 byte in hex
  return 0;
}

// Accessing Array Elements Using Pointers

#include <stdio.h>
int main()
{
  int arr[] = {11, 22, 33, 44, 55};
  int *ptr;
  ptr = arr;
  for (int i = 0; i <= 4; i++)
  {
    printf("\n%d", *(ptr + i));
  }
  return 0;
}

// Modifying Array Elements Using Pointers

#include <stdio.h>
int main()
{
  int arr[] = {55, 44, 23, 96, 77};
  int *p;
  p = arr;
  *(p + 3) = 69;
  for (int i = 0; i <= 4; i++)
  {
    printf("\n%d", *(p + i));
  }
  return 0;
}

// Pointer Arithmetic

#include <stdio.h>
int main()
{
  int array[] = {11, 66, 43, 98, 444};
  int *pointer;
  pointer = array;
  printf("\n%d", *pointer); // 11
  pointer++;
  printf("\n%d", *pointer); // 66
  pointer--;
  printf("\n%d", *pointer); // 11
  pointer += 2;
  printf("\n%d", *pointer); // 43
  pointer -= 1;
  printf("\n%d", *pointer); // 66
  return 0;
}

// Dynamic Memory Allocation

// -> built in function in stdlib.h
// malloc() -> ptr = (cast_type *)malloc(number_of_element * sizeof(data_type));
// realloc() -> ptr = (cast_type *)realloc(old_ptr, new_number_of_element*sizeof(data_type));
// free() -> free(ptr);

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, *ptr;
  printf("\nEnter the number of element to be entered:-");
  scanf("%d", &n);
  ptr = (int *)malloc(n * sizeof(int));
  if (ptr == NULL)
  {
    printf("\nMemory Allocation Failed");
    return 1;
  }
  for (int i = 0; i < n; i++)
  {
    printf("Enter the '%d':-", i + 1);
    scanf("%d", (ptr + i));
  }
  for (int i = 0; i < n; i++)
  {
    printf("\nThe '%d' element is %d", i + 1, *(ptr + i));
  }

  int new;
  printf("\nEnter the new size:-");
  scanf("%d", &new);
  ptr = (int *)realloc(ptr, new * sizeof(int));
  if (ptr == NULL)
  {
    printf("\nMemory Allocation Failed");
    return 1;
  }
  if (new > n)
  {
    printf("\nMore %d element can be entered!\n", new - n);
    for (int i = n; i < new; i++)
    {
      printf("Enter the new '%d':-", i + 1);
      scanf("%d", (ptr + i));
    }
    printf("\nNew Updated ");
    for (int i = 0; i < new; i++)
    {
      printf("\nThe '%d' element is %d", i + 1, *(ptr + i));
    }
  }
  free(ptr);
  return 0;
}

// calloc() -> (cast_type *)calloc(number_of_elements, sizeof(data_type));
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,*ptr;
  printf("\nEnter the no. of element you want to enter :-> ");
  scanf("%d",&n);
  ptr = (int *)calloc(n, sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory allocation failed\n");
    return 1;
  }
  for (int i = 0; i < n; i++)
  {
    printf("Enter the %d element -> ", i + 1);
    scanf("%p", (ptr + i));
  }
  for (int i = 0; i < n; i++)
  {
    printf("\nThe %d element is %d", i + 1, *(ptr + i));
  }
  return 0;
}

// Main difference between malloc() and calloc()

// malloc()
// 1. Allocates a single block of memory.
// 2. Does not initialize memory (contains garbage values).
// 3. Faster since it does not initialize memory.
// 4. Syntax -> ptr = (cast_type *)malloc(number_of_element * sizeof(data_type))

// calloc()
// 1. Allocates multiple blocks of memory and each block is of same size.
// 2. Initializes memory to zero.
// 3. Slightly slower due to zero-initialization.
// 4. Syntax -> ptr = (cast_type *)calloc(number_of_elements, sizeof(data_type));

// If speed is crucial → Use malloc() and initialize manually if needed.
// If you need zero-initialized memory → Use calloc().

// Pointer Comparison

#include<stdio.h>
int main(){
  int arr[100],n;
  printf("\nEnter the array size-> ");
  scanf("%d", &n);
  if (n > 100)
  {
    printf("\nYou Exceed the limit; Overflow");
  }
  else
  {
    for (int i = 0; i <= (n - 1); i++)
    {
      printf("\nEnter the '%d' element :- ", i + 1);
      scanf("%d", &arr[i]);
    }
  }
  int *start = arr;
  int *end = arr+n;
  while(start<end){ // comparing...
    printf("\n%d",*start);
    start++;
  }
  return 0;
}

// Using Pointers to Copy an Array

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[4];
  int *src = arr1, *dest = arr2;
  for (int i = 0; i <= 4; i++)
  {
    *(dest + i) = *(src + i); // copying...
  }
  for (int i = 0; i <= 4; i++)
  {
    printf("\t%d", arr2[i]);
  }
  return 0;
}

// Passing Arrays to Functions Using Pointers

#include <stdio.h>
int display(int *ptr, int n)
{
  for (int i = 0; i <= n; i++)
  {
    printf("\t%d", *(ptr + i));
  }
  return 0;
}
int main()
{
  int num[] = {1, 2, 3, 4, 5};
  display(num, 4);
  return 0;
}

// Returning an Array from a Function Using Pointers

#include <stdio.h>
int *returnArr()
{
  static int arr[] = {1, 2, 3, 4, 5};
  return arr;
}
int main()
{
  int *ptr = returnArr();
  for (int i = 0; i <= 4; i++)
  {
    printf("\t%d", *(ptr + i));
  }
  return 0;
}

// Pointer to an Array

#include <stdio.h>
int main()
{
  int arr[] = {1, 2, 3};
  int(*ptr)[3] = &arr;
  printf("%d\n", (*ptr)[2]);
  return 0;
}

