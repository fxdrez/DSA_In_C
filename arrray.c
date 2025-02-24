// #include <stdio.h>
// int main()
// {
//   int arr[5];
//   // insert the element
//   for (int i = 0; i <= 4; i++)
//   {
//     printf("\nEnter the '%d' elements of array:- ", i + 1);
//     scanf("%d", &arr[i]);
//   }
//   // display element
//   for (int i = 0; i <= 4; i++)
//   {
//     printf("\nArray element '%d' :- %d", i + 1, arr[i]);
//   }
//   return 0;
// }

#include <stdio.h>
int main()
{
  int n;
  printf("Enter the number of array element->");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i <= n - 1; i++)
  {
    printf("Enter the '%d' element ->", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("Array Elements\n");
  for (int i = 0; i <= n - 1; i++)
  {
    printf("%d is the '%d' element\n", arr[i], i + 1);
  }
}
