#include <stdio.h>

int BinSearch(int data[], int n, int find) {
  int low = 0;
  int high = n - 1;
  int mid;
  while (low <= high) {
    mid = (low + high) / 2;
    if (data[mid] == find) {
      return mid;
    } else if (data[mid] < find) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
    int data[6] = {1, 2, 3, 4, 5, 7};
    int n = 6, find = 5;
    int pos = BinSearch(data, n, find);
    if (pos == -1) 
    {
        printf("Element not found in the array\n");
    } else {
        printf("Found 5 at %d\n", pos);
    }//close else
    return 0;
}//end function
