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

// #include <stdio.h>
// int main()
// {
//   int n;
//   printf("Enter the number of array element->");
//   scanf("%d", &n);
//   int arr[n];
//   for (int i = 0; i <= n - 1; i++)
//   {
//     printf("Enter the '%d' element ->", i + 1);
//     scanf("%d", &arr[i]);
//   }
//   printf("Array Elements\n");
//   for (int i = 0; i <= n - 1; i++)
//   {
//     printf("%d is the '%d' element\n", arr[i], i + 1);
//   }
// }

#include <stdio.h>
int main()
{
  int size, arr[100], num, pos, base, del;
  printf("\nEnter the array size-> ");
  scanf("%d", &size);
  if (size > 100)
  {
    printf("\nYou Exceed the limit; Overflow");
  }
  else
  {
    for (int i = 0; i <= (size - 1); i++)
    {
      printf("\nEnter the '%d' element :- ", i + 1);
      scanf("%d", &arr[i]);
    }
  }
  do
  {
    printf("\nEnter the number for operation; 1-Output 2-Insert Value 3-Deletion 0-Exit :->");
    scanf("%d", &base);
    switch (base)
    {
    // Display
    case 1:
      for (int i = 0; i <= (size - 1); i++)
      {
        printf("\nThe '%d' element is : %d", i + 1, arr[i]);
      }
      break;

    // Insertion
    case 2:
      printf("\nEnter the value to be inserted: ");
      scanf("%d", &num);
      printf("\nEnter the position where the value is to be inserted: ");
      scanf("%d", &pos);
      if (pos <= 0 || pos > size + 1)
      {
        printf("\nInvalid Position!!");
      }
      else
      {
        for (int i = size - 1; i >= pos - 1; i--)
        {
          arr[i + 1] = arr[i];
        }
        arr[pos - 1] = num;
        size++;
        for (int i = 0; i <= (size - 1); i++)
        {
          printf("\nThe '%d' element is : %d", i + 1, arr[i]);
        }
      }
      break;

    // Deletion
    case 3:
      printf("\nEnter the position of data to be deleted : ");
      scanf("%d", &del);
      if (del <= 0 || del > size + 1)
      {
        printf("\nInvalid Position!!");
      }
      else
      {
        for (int i = del - 1; i <= size - 1; i++)
        {
          arr[i] = arr[i + 1];
        }
        size--;
        for (int i = 0; i <= (size - 1); i++)
        {
          printf("\nThe '%d' element is : %d", i + 1, arr[i]);
        }
      }
      break;
    case 0:
      printf("\nProcess Terminated!!");
      break;
    default:
      printf("\nInvalid Operation!!");
      break;
    }
  } while (base != 0);
  return 0;
}
