class OrderedStream {
public:
    int ptr = 1;
    map<int, string> stream;
    OrderedStream(int n) {
        for(int i = 1; i <= n; i++)
        stream.insert({i,""});
    }
    
    vector<string> insert(int idKey, string value) {
        stream[idKey] = value;
        vector<string> result;
        while(stream[ptr] != ""){
            result.push_back(stream[ptr]);
            ptr++;
        }
        return result;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
