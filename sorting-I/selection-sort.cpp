<<<<<<< HEAD
// Sort the given unsorted array 'arr' of size 'N' 
// in non-decreasing order using the selection sort algorithm.
// input: N = 5
// arr = {8, 6, 2, 5, 1}
//Output: 1 2 5 6 8 

void selectionSort(vector<int>&arr) {
    // Write your code here.

    int n=arr.size();
    for(int i=0; i<=n-2; i++) {

        int mini=i;

        for(int j=i; j<=n-1; j++) {
            if(arr[j]<arr[mini]) {

                mini=j;
            }
        }
        // int temp=arr[mini];
        // arr[mini]=arr[i];
        // arr[i]=temp;

        swap(arr[mini], arr[i]);    
  }
  
=======
// Sort the given unsorted array 'arr' of size 'N' 
// in non-decreasing order using the selection sort algorithm.
// input: N = 5
// arr = {8, 6, 2, 5, 1}
//Output: 1 2 5 6 8 

void selectionSort(vector<int>&arr) {
    // Write your code here.

    int n=arr.size();
    for(int i=0; i<=n-2; i++) {

        int mini=i;

        for(int j=i; j<=n-1; j++) {
            if(arr[j]<arr[mini]) {

                mini=j;
            }
        }
        // int temp=arr[mini];
        // arr[mini]=arr[i];
        // arr[i]=temp;

        swap(arr[mini], arr[i]);    
  }
  
>>>>>>> f60729a6a8516fe8f4eb1961a8d66ddfb046606a
}