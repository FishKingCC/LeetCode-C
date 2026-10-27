#include <stdlib.h>
// 暴力解
int countGoodTriplets(int* arr, int arrSize, int a, int b, int c) {
    unsigned int count = 0;
    for(int k = 0; k < arrSize; k++) {
        for (int j = 0; j < k; j++) {
            for (int i = 0; i < j; i++) {
                if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                    count++;
            }
        }
    }
    return count;
}