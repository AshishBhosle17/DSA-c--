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
