class MovingAverage {
public:
    /** Initialize your data structure here. */
    
    deque<int> window;
    int windowSize;
    double currSum;
    MovingAverage(int size) {
        windowSize = size;
    }
    
    double next(int val) {
        window.push_back(val);
        currSum += val;
        if(window.size() > windowSize){
            currSum -= window[0];
            window.pop_front();
        }
        
        return currSum/static_cast<double>(window.size());
        
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
