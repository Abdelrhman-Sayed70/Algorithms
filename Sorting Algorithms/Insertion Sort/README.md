# Insertion sort
![1_VxgYISRmyEOCPGMbBh8VFg](https://user-images.githubusercontent.com/99830416/218607314-4181b809-c3fc-47d0-8042-04304f00c498.gif)
![1_UpB6EEJZB8HihhERZWxC-A](https://user-images.githubusercontent.com/99830416/218608524-bf4fe665-fd37-4ace-ae8b-6488be3cf52b.gif)

```cs
using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace csharp
{
    internal class Program
    {
        static void insertionSort(int[]arr)
        {
            for(int i = 1; i < arr.Length; i++)
            {
                int key = arr[i];
                int j = i - 1;
                while (true)
                {
                    if (j < 0 || arr[j] <= key)
                    {
                        break; 
                    }
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }
        }

        static void printArr(int[] arr)
        {
            foreach(int i in arr)
            {
                Console.Write(i + " ");
            }
            Console.WriteLine();
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Enter number of array elements: ");
            int n = Convert.ToInt32(Console.ReadLine());
            int[]arr = new int[n];
            Console.WriteLine("Enter array elements: ");
            for(int i = 0; i < n; i++)
            {
                int input = Convert.ToInt32(Console.ReadLine());
                arr[i] = input;
            }
            Console.WriteLine("Array before sorting: ");
            printArr(arr);
            insertionSort(arr);
            Console.WriteLine("Array after insertion sort: ");
            printArr(arr);
        }
    }
}

```

## `Time complexity`
### Best Case 

- Already sorted array 
- Inner loop never excuted O(1)
- Final Order : O(N)

### Worst Case 

- Array sorted reversely
- Inner loop excuted for all iterations of the outer loop O(N)
- Final Order : O(N^2)


