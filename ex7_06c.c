void selection_sort(int A[], int n) {
    if (n <= 1){
        return;
    }

    int min_idx = 0;
    for (int i = 1; i < n; i++) {
        if (A[i] < A[min_idx]) {
            min_idx = i;
        }
    }

    int_swap(&A[0], &A[min_idx]);

    selection_sort(A + 1, n - 1);
}