# Heap Sort


def heapify(arr, n, i):
    largest = i
    left = 2 * i + 1	 # left = 2*i + 1
    right = 2 * i + 2	 # right = 2*i + 2

    # See if left child of root exists and is
    # greater than root
    if left < n and arr[i] < arr[left]:
        largest = left

    # See if right child of root exists and is
    # greater than root
    if right < n and arr[largest] < arr[right]:
        largest = right

    # Change root, if needed
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify(arr, n, largest)


# The main function to sort an array of given size
def heap_sort(input_list):
    size = len(input_list)
    result_array = input_list[:]

    # Build a max heap.
    for i in range(size, -1, -1):
        heapify(result_array, size, i)

    # One by one extract elements
    for i in range(size-1, 0, -1):
        result_array[i], result_array[0] = result_array[0], result_array[i]
        heapify(result_array, i, 0)

    return result_array


if __name__ == '__main__':
    sample = [543, 87963, 9, 1, 56, 123]

    print("Sorted array:")
    print(sample)

    print("Sorted array:")
    print(heap_sort(sample))
