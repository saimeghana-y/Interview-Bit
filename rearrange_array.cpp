void Solution::arrange(vector<int> &A) {
    int n= A.size();
    int temp[n];
    for (int i=0;i<n;i++){
        temp[i] = A[A[i]];
    }
    for (int i=0;i<n;i++){
        A[i] = temp[i];
    }
    
}
