void selection_sort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;

        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[min_idx]) {
                min_idx = j;
            }
        }

        int_swap(&A[i], &A[min_idx]);
    }
}