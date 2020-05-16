
bool isPrime(int A){
    if(A<=1) return false;
    if(A==2) return true;
    if(A%2==0) return false;
    
    for (int i=3;i*i<=A;i+=2){
        if(A%i==0) return false;
    }
    return true;
}



vector<int> Solution::primesum(int A) {
    vector <int> ans;
    ans.reserve(2);
    for(int i=2;i<A;i++){
        if(isPrime(i)&&isPrime(A-i)){
            ans.push_back(i);
            ans.push_back(A-i);
            return ans;
        }
    }
    return ans;
}
