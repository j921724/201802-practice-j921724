//참고 https://blog.weirdx.io/post/3122 

void sift_up(int* arr, int root, int current) {

    int parent;

    while (current > root) {
        parent = get_parent(current);
        if (arr[parent] >= arr[current])
            return;

        swap(&arr[parent], &arr[current]);
        current = parent;
    }
}

void heapify_top_down(int* arr, int length) {

    int end = 1;

    while(end < length) {
        sift_up(arr, 0, end++);
    }
}

void heap_sort(int* arr, int length) {
    if (arr == nullptr || length <= 1) {
        return;
    }

    // heapify
    heapify_top_down(arr, length);

    // sort
    int end = length - 1;
    while(end > 0) {
        swap(&arr[0], &arr[end--]);
        sift_down(arr, 0, end);
    }
}

void heapify_buttom_up(int* arr, int length) {

    int end = length - 1;
    int current = get_parent(end);

    while(current >= 0) {
        sift_down(arr, current--, end);
    }
}

// Ref : http://en.wikipedia.org/wiki/Heapsort#Pseudocode
void sift_down(int* arr, int current, int last) {

    int left;
    int right;
    int max;

    while((current * 2) + 1 <= last) {
        left = (current * 2) + 1;
        right = (current * 2) + 2;
        max = current;

        if (arr[left] > arr[max]) {
            max = left;
        }

        if (right <= last && arr[right] > arr[max]) {
            max = right;
        }

        if (max != current) {
            swap(&arr[current], &arr[max]);
            current = max;
        } else {
            return;
        }
    }
}