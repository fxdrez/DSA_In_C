#include <stdio.h>
int main()
{
  int arr[5];
  // insert the element
  for (int i = 0; i <= 4; i++)
  {
    printf("\nEnter the '%d' elements of array:- ", i + 1);
    scanf("%d", &arr[i]);
  }
  // display element
  for (int i = 0; i <= 4; i++)
  {
    printf("\nArray element '%d' :- %d", i + 1, arr[i]);
  }
  return 0;
}