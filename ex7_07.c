int most_frequent(int A[], int n) {
    int best_value = A[0];
    int best_count = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (A[j] == A[i]) {
                count++;
            }
        }

        if (count > best_count) {
            best_count = count;
            best_value = A[i];
        } else if (count == best_count && A[i] < best_value) {
            best_value = A[i];
        }
    }

    return best_value;
}