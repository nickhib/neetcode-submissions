class TimeMap {
public:
    vector<int> times;
    unordered_map<string, vector<pair<int, string>>> umap;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        umap[key].emplace_back(timestamp,value);
    }
    
    string get(string key, int timestamp) {
        auto &values = umap[key];
        int left =0;
        int right = values.size()-1;
        string result = "";

        while(right >= left)
        {
            int mid = left + (right-left)/2;
    
            if(values[mid].first <= timestamp)
            {
                result = values[mid].second;
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }

        return result;
  
    }
};
