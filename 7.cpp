class Solution {
public:
    int reverse(int x) {
        queue<int> myqueue;
        bool isnega = false;
        long result=0;
        long x_new = long(x);
        if(x_new == 0){
            return 0;
        }
        if (x_new < 0){
            isnega = true;
            x_new = -x_new;
        }
        else{
            isnega = false;
        }
        for(;x_new != 0;x_new /= 10){
            myqueue.push(x_new%10);
        }
        while (!myqueue.empty()) {
            result = result * 10 + myqueue.front();
            myqueue.pop();
        }
        if(result > pow(2, 31) - 1){
            return 0;
        }
        if(isnega){
            return -result;
        }
        else{
            return result;
        }
    }
};
