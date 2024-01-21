//Hashing - Counting freq of arr elements

vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector<int> freq(n, 0);

    for(int i = 0; i < n; i++){

        freq[nums[i]-1]++;

    }

    return freq;
}

// Highest / lowest freq elements in an arr

vector<int> getFrequencies(vector<int>& v) {
    
    map<int,int> mpp;

    //pre computation 

    for(int i =0;i<v.size();i++){

        mpp[v[i]]+=1;

    }
    //elements stored in the mpp map

    int maxRepetations = 0;

    int minRepetations = v.size();

    int maxelement = 0;

    int minelement = (int)1e9 + 1; 

    //itreating over the map

    for(auto it: mpp){

        int count = it.second;

        int element = it.first;

        if(count > maxRepetations){

            maxRepetations = count;

            maxelement = element;

        }

        else if(count == maxRepetations) {

            maxelement = min(maxelement, element);

        }

        // till here we have the sol for max repetation of the element

        if(count < minRepetations){

            minRepetations = count;

            minelement = element;

        } else if(count == minRepetations){

            minelement = min(minelement, element);

        }

    }

    vector<int> ans = {maxelement, minelement};
    return ans;