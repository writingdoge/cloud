#include<bits/stdc++.h>
using namespace std;

void quick_sort( vector <int> &a, const int l, const int len) {
  if (len <= 1) return;
  const int mid = a[l+ rand() % len];

  int i = 0, j = 0, k = len;
  while (i < k) {
    if (a[l+i] < mid)
    {
      swap(a[l+i], a[l+j]);
      i++;
      j++;
    }
    else if (mid < a[l+i])
    {
        --k;
        swap(a[l+i], a[l+k]);
    }
    else
      i++;
  }
  quick_sort(a, l, j);
  quick_sort(a, l + k, len - k);
}

int main()
{
    int n;
    cin >> n;
    vector <int> v(n+1);
    for(int i=1;i<=n;++i)
    {
        cin >> v[i];
    }
    quick_sort(v,1,n);
    for(int i=1;i<=n;++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
5
1 3 2 4 1

 */