//https://leetcode.com/articles/a-recursive-approach-to-segment-trees-range-sum-queries-lazy-propagation/
vector<int>tree(100001);
void buildSegTree(vector<int>& arr, int treeIndex, int lo, int hi){
    if (lo == hi) {
        tree[treeIndex] = arr[lo];
        return;
    }

    int mid = lo + (hi - lo) / 2;
    buildSegTree(arr, 2 * treeIndex + 1, lo, mid);
    buildSegTree(arr, 2 * treeIndex + 2, mid + 1, hi);

    tree[treeIndex] = tree[2 * treeIndex + 1]+tree[2 * treeIndex + 2];
}

int querySegTree(int treeIndex, int lo, int hi, int i, int j){
    if (lo > j || hi < i)
        return 0;
    if (i <= lo && j >= hi)
        return tree[treeIndex];
    int mid = lo + (hi - lo) / 2;
    
    if (i > mid)
        return querySegTree(2 * treeIndex + 2, mid + 1, hi, i, j);
    else if (j <= mid)
        return querySegTree(2 * treeIndex + 1, lo, mid, i, j);

    int leftQuery = querySegTree(2 * treeIndex + 1, lo, mid, i, mid);
    int rightQuery = querySegTree(2 * treeIndex + 2, mid + 1, hi, mid + 1, j);

    return leftQuery+rightQuery;
}

void updateValSegTree(int treeIndex, int lo, int hi, int arrIndex, int val){
    if (lo == hi) {
        tree[treeIndex] = val;
        return;
    }

    int mid = lo + (hi - lo) / 2;

    if (arrIndex > mid)
        updateValSegTree(2 * treeIndex + 2, mid + 1, hi, arrIndex, val);
    else if (arrIndex <= mid)
        updateValSegTree(2 * treeIndex + 1, lo, mid, arrIndex, val);
    
    tree[treeIndex] = tree[2 * treeIndex + 1]+tree[2 * treeIndex + 2];
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &x:arr)
        cin>>x;
    // Here arr[] is input array and n is its size.
    buildSegTree(arr,0,0,n-1); //0-based indexing  TreeIndex,low,high
    // call this method as querySegTree(0, 0, n-1, i, j);
    // Here [i,j] is the range/interval you are querying.
    cout<<querySegTree(0,0,n-1,0,1)<<endl; // TreeIndex, lo,high, l,r
    // call this method as updateValSegTree(0, 0, n-1, i, val);
    // Here you want to update the value at index i with value val.
    updateValSegTree(0,0,n-1,2,50); //TreeIndex,lo,high, arrayIndex(0 based), value
    cout<<querySegTree(0,0,n-1,1,2)<<endl;
}