struct Heap {
    vector<int> v;
    int n;
 
    Heap(int i = 0)
        : n(i)
    {
        v = vector<int>(n);
    }
};
 

inline int left(int i) { return 2 * i + 1; }
inline int right(int i) { return 2 * i + 2; }


int kthMaximumElement(int arr[], int n, int k)
{
    //Your code here
    priority_queue<pair<int, int> > p;
    p.push(make_pair(arr[0], 0));
 
    for (int i = 0; i < k - 1; ++i) {
        int j = p.top().second;
        p.pop();
        int l = left(j), r = right(j);
        if (l < n)
            p.push(make_pair(arr[l], l));
        if (r < n)
            p.push(make_pair(arr[r], r));
    }
    return p.top().first;
}