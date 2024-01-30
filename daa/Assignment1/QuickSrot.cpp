#include <iostream>
using namespace std;


int partition_array(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);	

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
		}
	}

    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
	return (i + 1);
}

void quick_sort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pivot = partition_array(arr, low, high);

		quick_sort(arr, low, pivot - 1);
		quick_sort(arr, pivot + 1, high);
	}
}

void print_array(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

int main()
{
	int myArray[] = { 9, 2, 5, 1, 7, 4, 8, 3 };

	int size = sizeof(myArray) / sizeof(myArray[0]);

	cout << "Original array: ";
	print_array(myArray, size);

	quick_sort(myArray, 0, size - 1);

	cout << "Sorted array: ";
	print_array(myArray, size);

	return 0;
}