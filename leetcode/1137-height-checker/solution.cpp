class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int N = static_cast<int>(heights.size());
        vector<int> expected = heights;

        // Bubble sort
        for (int i = 0; i < N - 1; i++) {
            bool has_swapped = false;
            for (int j = 0; j < N - 1 - i; j++) {
                if (expected[j] > expected[j + 1]) {
                    int temp = expected[j];
                    expected[j] = expected[j + 1];
                    expected[j + 1] = temp;
                    has_swapped = true;
                }
            }
            if (!has_swapped) break;
        }

        // Count mismatches
        int count = 0;
        for (int i = 0; i < N; i++) {
            if (heights[i] != expected[i]) count++;
        }
        return count;
    }
};

