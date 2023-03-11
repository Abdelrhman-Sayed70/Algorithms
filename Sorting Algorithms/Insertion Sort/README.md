# Insertion sort
![1_VxgYISRmyEOCPGMbBh8VFg](https://user-images.githubusercontent.com/99830416/218607314-4181b809-c3fc-47d0-8042-04304f00c498.gif)
![1_UpB6EEJZB8HihhERZWxC-A](https://user-images.githubusercontent.com/99830416/218608524-bf4fe665-fd37-4ace-ae8b-6488be3cf52b.gif)

```cs
static void InsertionSort(int[]arr)
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


