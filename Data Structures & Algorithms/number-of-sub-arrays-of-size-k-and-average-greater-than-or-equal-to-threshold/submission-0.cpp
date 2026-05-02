class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int l = 0;
        int avg = 0;
        int count =0;
        for(int r = 0; r < arr.size();r++)
        {
            if(r-l == k)
            {
                if(avg/k >= threshold){
                    cout <<"avg: "<< avg << endl;
                    count++;
                }
                avg-= arr[l];
                l++;
            }
            avg+=arr[r];
            cout << avg << endl;
        }
        if(avg/k >= threshold){
            cout <<"avg: "<< avg << endl;
            count++;
        }
        return count;

        
    }
};