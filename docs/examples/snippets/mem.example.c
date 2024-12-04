#include <stdio.h>
#include <string.h>

int main() {
  //! [memcmp]
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {1, 2, 3, 4, 6};

  
  int result = memcmp(arr1, arr2, sizeof(arr1)); // result != 0
  //! [memcmp]

  if (result == 0) {
    printf("Arrays are equal\n");
  } else {
    printf("Arrays are not equal\n");
  }
  return 0;
}
