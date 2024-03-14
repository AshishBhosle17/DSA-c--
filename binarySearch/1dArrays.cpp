// Binary Search

int search(vector<int> &nums, int target)
{

    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == nums[mid])
            return mid;
        else if (target > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

//  Implement Lower Bound

int lowerBound(vector<int> arr, int n, int x)
{
    // Write your code here
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;

            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

// Upper Bound

int upperBound(vector<int> &arr, int x, int n)
{
    // Write your code here.
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] > x)
        {
            ans = mid;

            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

// Search Insert Position

int searchInsert(vector<int> &arr, int x)
{
    // Write your code here.
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;

            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

// Floor / Ceil in sorted arrays

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x)
{
    // Write your code here.

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ceil = -1;

    // if we find the insert position of x then we can say that
    //  insertPos-1=floor and insertPos+1=ceil

    while (start <= end)
    {

        if (a[mid] == x)
        {

            ceil = mid;
            return {a[ceil], a[ceil]};
        }
        else if (a[mid] > x)
        {

            ceil = mid;
            if (mid == 0)
            {
                return {-1, a[ceil]};
            }
            else
            {
                end = mid - 1;
            }
        }
        else
        {
            if (mid == (n - 1))
            {
                ceil = mid;
                return {a[ceil], -1};
            }
            else
            {
                start = mid + 1;
            }
        }
        mid = start + (end - start) / 2;
    }
    return {a[ceil - 1], a[ceil]};
}

//  First and Last Position of an Element In Sorted Array

#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k)
        {
            first = mid;
            // look for smaller index on the left
            high = mid - 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1; // look on the right
        }
        else
        {
            high = mid - 1; // look on the left
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k)
        {
            last = mid;
            // look for larger index on the right
            low = mid + 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1; // look on the right
        }
        else
        {
            high = mid - 1; // look on the left
        }
    }
    return last;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int first = firstOccurrence(arr, n, k);
    if (first == -1)
        return {-1, -1};
    int last = lastOccurrence(arr, n, k);
    return {first, last};
}

// Number of Occurence

int firstOccurrence(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k)
        {
            first = mid;
            // look for smaller index on the left
            high = mid - 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1; // look on the right
        }
        else
        {
            high = mid - 1; // look on the left
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k)
        {
            last = mid;
            // look for larger index on the right
            low = mid + 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1; // look on the right
        }
        else
        {
            high = mid - 1; // look on the left
        }
    }
    return last;
}
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int first = firstOccurrence(arr, n, k);
    if (first == -1)
        return {-1, -1};
    int last = lastOccurrence(arr, n, k);
    return {first, last};
}

int count(vector<int> &arr, int n, int x)
{
    // Write Your Code Here
    pair<int, int> ans = firstAndLastPosition(arr, n, x);
    if (ans.first == -1)
        return 0;
    return (ans.second - ans.first + 1);
}

//  Search In Rotated Sorted Array

int search(vector<int> &arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        // either right or left half is sorted
        // if left one
        if (arr[low] <= arr[mid])
        {

            // mid aur low k inside m h k
            if (arr[low] <= k && k <= arr[mid])
            {

                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        { // right half is sorted

            if (arr[mid] <= k && arr[high] >= k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

//  Search In A Rotated Sorted Array II

bool searchInARotatedSortedArrayII(vector<int> &arr, int k)
{
    // Write your code here.
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == k)
            return true;

        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low = low + 1;
            high = high - 1;
            continue;
        }

        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= k && k <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= k && k <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}

// Find Minimum in Rotated Sorted Array

int findMin(vector<int> &arr)
{
    // Write your code here.
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            ans = min(ans, arr[mid]);
        }
    }
    return ans;
}
