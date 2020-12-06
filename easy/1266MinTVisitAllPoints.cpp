#include <vector> 
#include <algorithm>

using std::vector;
using std::max;

int main(){
    return 0;
}

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0;
        for(int i = 0; i < points.size() - 1; i++){
            vector<int> curr = points[i];
            vector<int> next = points[i+1];
            time += minTime(curr, next);
        }
        return time;
    }
    
    int minTime(vector<int> p1, vector<int> p2){
        int x = 0;
        int y = 1;
        int xDis = abs(p2[x] - p1[x]);
        int yDis = abs(p2[y] - p1[y]);
        
        if(xDis == 0){
            return yDis;
        }
        if(yDis == 0){
            return xDis;
        }
        
        return max(xDis, yDis);
    }
};