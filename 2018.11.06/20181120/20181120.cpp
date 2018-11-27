# include<stdio.h>
//ÇÔ¼ö

void swapElement(int*arr, int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void insertElement(int* arr, int ele)
{
	while (ele > 0) {
		if (arr[ele - 1] > arr[ele])
			swapElement(arr, ele - 1, ele);
		else
			break;
		ele--;
	}
}
void printArray{ int*arr, int length)
{
	for (int count = 0; count < length; count++)
		  printf("arr[%d]=%d\n",count,arr[count]);


}


void insertionSort(int* arr, int length) {
	for (int i = 1; i < length; i++)
		insertElement(arr, i);
}

int main()
{
	int arr[] = { 37,42,45,50,40}
		insertionSort(arr,5);
		printArray(arr, 5);
		insertElenment(a, 5);
		return 0;
		}


