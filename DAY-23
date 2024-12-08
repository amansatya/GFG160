int merge(vector<int>& arr, int l, int mid, int r) 
    {
        int i = l, j = mid + 1, k = 0;
        vector<int> temp(r-l+1);
        int c = 0;
        while (i <= mid && j <= r) 
        {
            if (arr[i] <= arr[j])
                temp[k++] = arr[i++];
            else 
            {
                temp[k++] = arr[j++];
                c += (mid - i + 1);
            }
        }
        while (i <= mid) 
            temp[k++] = arr[i++];
        while (j <= r) 
            temp[k++] = arr[j++];
        for (i = l, k = 0; i <= r; i++, k++) 
            arr[i] = temp[k];
        return c;
    }
    int mergesort(vector<int>& arr, int l, int r) 
    {
        int c=0;
        if (l < r) 
        {
            int mid = l + (r - l) / 2;
            c += mergesort(arr, l, mid);
            c += mergesort(arr, mid + 1, r);
            c += merge(arr, l, mid, r);
        }
        return c;
    }
    int inversionCount(vector<int> &arr) 
    {
        return mergesort(arr,0,arr.size()-1);
    }
