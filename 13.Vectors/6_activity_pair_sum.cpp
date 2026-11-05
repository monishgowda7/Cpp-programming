#include<iostream>
#include<vector>
using namespace std;

vector<int> Pairsum(vector<int> vtr , int target){

    vector<int> ans;
    int st = 0 , end = vtr.size()-1;

    while(st<end){
        int curr = vtr[st] + vtr[end];
        if (curr == target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }

        else if (curr > target){
            end--;
        }
        else{
            st++;
        }

    }

    return ans;

}
int main(){
    
    vector<int> vtr = {2,7,11,15};
    int target = 9;

    vector<int> index = Pairsum(vtr , target);

    cout<<"["<<index[0]<<","<<index[1]<<"]"<<endl;
    return 0;
}