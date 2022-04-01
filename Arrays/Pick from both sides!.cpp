// problem link : https://www.interviewbit.com/problems/pick-from-both-sides/

/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int solve(int* A, int n, int B) {
    int suff = 0;
    int i;
    for(i = n-1;i>=n-B;i--) suff+=A[i];
    int ans = suff,pref = 0;
    for(i = 0;i<B;i++){
        pref+=A[i];
        suff-=A[n-B+i];

        if(ans<pref+suff)
        ans = pref+suff;
    }
    return ans;
}
