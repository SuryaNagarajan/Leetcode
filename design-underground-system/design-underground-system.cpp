class UndergroundSystem {
public:
    
    map<int,pair<string,int>> m1;
    map<pair<string,string>,vector<int>> m2;
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        m1[id]=make_pair(stationName,t);
    }
    
    void checkOut(int id, string stationName, int t) {
        auto it=m1[id];
        
        m2[make_pair(it.first,stationName)].push_back(t-it.second);
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        
        auto it=make_pair(startStation,endStation);
        double sum=0;
        for(int i=0;i<m2[it].size();i++){
            sum+=m2[it][i];
        }
        
        return (sum/m2[it].size())*1.0;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */