#include "Quicksort.h"


Quicksort::Quicksort()
{

}


Quicksort::~Quicksort()
{

}

void Quicksort::quicksort(int array[], int left, int right)
{
	if (left >= right)
	{
		return;
	}

	int pivot = array[(left + right)/2];
	int index = partition(array, left, right, pivot);

	quicksort(array, left, index - 1);
	quicksort(array, index, right);
}

int Quicksort::partition(int array[], int left, int right, int pivot)
{
	while (left <= right)
	{
		while (array[left] < pivot)
		{
			left++;
		}

		while (array[right] > pivot) {
			right--;
		}

		if (left <= right)
		{
			swap(array, left, right);
			left++;
			right--;
		}
	}

	return left;
}

void Quicksort::swap(int array[], int left, int right)
{
	int temp = array[left];
	array[left] = array[right];
	array[right] = temp;
}
