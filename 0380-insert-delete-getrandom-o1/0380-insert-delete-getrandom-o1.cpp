class RandomizedSet {
    unordered_map<int,int> mp;
    vector<int> vec;
public:
    RandomizedSet() {
          srand(time(0));
    }
    
    bool insert(int val) {
        if(mp.count(val))
            return false;
        vec.push_back(val);
        mp.insert({val,vec.size()-1});
        return true;
    }
    
    bool remove(int val) {
        if(!mp.count(val))
            return false;
        int index=mp[val];
        mp.erase(val);
        if(index!=vec.size()-1){
            vec[index]=vec[vec.size()-1];
            mp[vec[index]]=index;
        }
        vec.pop_back();
        return true;
    }
    
    int getRandom() {
        if(vec.size()<1){
            return -1;
        }
        int index=rand()%vec.size();
        return vec[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */