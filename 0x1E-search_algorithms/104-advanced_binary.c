#include "search_algos.h"
/**
 * binary_search - This searches an array using binary search
 *
 * @array: the array to be searched
 * @size: the size
 * @value: the value
 * Return: the index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (b_searc(array, 0, size - 1, value, -1));
}
/**
 * b_searc - This searches an array using binary search
 *
 * @array: the array to be searched
 * @start: the starting index
 * @end: the ending index
 * @id: the current index
 * @value: the value
 * Return: the index or -1
 */
int b_searc(int *array, int start, int end, int value, int id)
{
	int mid, i, *p, mark;

	p = &id;
	mark = id;
	if (array[start] == value && start == end)
		return (start);
	if (end >= start)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
			printf("%d%s", array[i], i == end ? "\n" : ", ");
		mid = (end + start) / 2;
		if (array[mid] == value)
		{
			*p = mid;
			if (mark == -1)
				return (b_searc(array, start, mid, value, *p));
			if (mid < mark)
				return (b_searc(array, start, mid, value, *p));
		}
		if (value < array[mid])
			return (b_searc(array, start, mid - 1, value, *p));
		if (value > array[mid])
			return (b_searc(array, mid + 1, end, value, *p));
		return (mid);
	}
	return (-1);

}
