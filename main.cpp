#include <iostream>
#include<vector>
#include <numeric>
using namespace std;

int findMinMoves(vector<int>& machines) {
        int sum = accumulate(machines.begin(), machines.end(), 0);
        
        
        if(sum % machines.size() != 0 )
            return -1;
        
        int res =0;
        int items = sum/machines.size();
        int c =0;
        for(auto i : machines){
            
            c += i-items;
            res = max(res,max(i-items, abs(c)));
            
            cout<<i<<"   "<<c<<"     "<<res<<endl;
        }
        return res;
    }

int main(int argc, const char * argv[]) {
    vector<int> v = {4,0,0,4};
    cout<<findMinMoves(v)<<endl;
    return 0;
}
