#include <stddef.h>

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algoritm
 */
int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }
    
    for (size_t i = 0; i < size; i++) {
        if (array[i] == value) {
            return i;
        }
    }
    
    return -1;
}
