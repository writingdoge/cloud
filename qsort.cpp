#include<bits/stdc++.h>
using namespace std;

void quick_sort( vector <int> &a, const int l, const int len) {
  if (len <= 1) return;
  const int mid = a[l+ rand() % len];

  int i = 0, j = 0, k = len;
  while (i < k) {
    if (arr[l+i] < mid)
    {
      swap(arr[l+i], arr[l+j]);
      i++;
      j++;
    }
    else if (mid < arr[l+i])
    {
        --k;
        swap(arr[l+i], arr[l+k]);
    }
    else
      i++;
  }
  quick_sort(a, l, j);
  quick_sort(a, l + k, len - k);
}

int main()
{

    return 0;
}