#include <algorithm>
#include <vector> 
#include <map>
using std::pair;
using std::vector;
using std::map;

int main(){
    
    return 0;
}

class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        vector<vector<int>> result;
        map<int, vector<int>> m;
        for(int i = 0; i < items.size(); i++){
            if(m.find(items[i][0]) == m.end()){
                m.insert({items[i][0], vector<int>{items[i][1]}});
            } else {
                m.find(items[i][0])->second.push_back(items[i][1]);
            }
        }
        
        for(pair<int, vector<int>> p : m){
           result.push_back(vector<int>{p.first, averageTopFive(p.second)});
        }
        return result;
    }
    
    int averageTopFive(vector<int>& scores){
        sort(scores.rbegin(), scores.rend());
        int sum = 0;
        for(int i = 0; i < 5; i++){
            sum += scores[i];
        }
        return sum/5;
    }
};