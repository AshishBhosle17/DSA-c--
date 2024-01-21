// Print n times

void print(int start,int end,vector<string>&ans){

    //base case
    if(start==end+1){

        return;
    }

    ans.push_back("Coding Ninjas ");

    //incresing the start to use recursion
    print(start+1,end,ans);
}
vector<string> printNTimes(int n) {
	//making the answer vector for storing the answers

    vector<string>ans;
    //here recursion begain
    print(1,n,ans);
    //after recursion

    return ans;
}

// Print 1 to N without loop

void print(int n , int index , vector<int>&ans)
{
    // Base case
    if(index == n+1)
    {
        return;
    }
    
     ans.push_back(index);

    // Function call with index++
    print(n,index+1 , ans);
    
}

vector<int> printNos(int x) {
   // ans which stores final answer
    vector<int>ans;

    // Function call
     print(x,1, ans);

     return ans;
}

// Print N to 1 (reverse)

void arr(int n,vector<int> &res)
{
    if(n<1)
    {
        return;
    }

    res.push_back(n);
    arr(n-1,res);  

}

vector<int> printNos(int x) {
    // Write Your Code Here

    vector<int> res;
    arr(x,res);
    return res;
}

// Factorial

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long> res;

    long long ans=1;

 

     for(int i=1;ans*i<=n;i++){

        ans=ans*i;

        res.push_back(ans);\

     }

     return res;
    
}