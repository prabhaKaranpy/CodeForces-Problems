#include<bits/stdc++.h>
using namespace std;
int main(void){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<int> A(n), B(n);
        for(int &it : A) cin>>it;
        for(int &it : B) cin>>it;
        vector<pair<int, int>> ans;
        for(int j = n-1; j > 0; j--){
            int index = 0;
            // int prev = 0;
            int maxi = -1e8;
            for(int i = j; i >= 0; i--){
                if(A[i] > maxi){
                    maxi = A[i];
                    index = i;
                }
            }
            if(index != j){
                int temp = A[index];
                for(int z = index+1; z <= j; z++){
                    A[z-1] = A[z];
                }
                A[j] = temp;
                for(int z = index; z < j; z++){
                    ans.push_back({1, z+1});
                }
            }
        }

        for(int j = n-1; j > 0; j--){
            int index = 0;
            // int prev = 0;
            int maxi = -1e8;
            for(int i = j; i >= 0; i--){
                if(B[i] > maxi){
                    maxi = B[i];
                    index = i;
                }
            }
            if(index != j){
                int temp = B[index];
                for(int z = index+1; z <= j; z++){
                    B[z-1] = B[z];
                }
                B[j] = temp;
                for(int z = index; z < j; z++){
                    ans.push_back({2, z+1});
                }
            }
        }
        // for(int &it : A) cout<<it<<" ";
        // cout<<endl;
        // for(int &it : B) cout<<it<<" ";
        // cout<<endl;
        for(int i = 0; i < n; i++){
            if(B[i] < A[i]){
                int temp = A[i];
                A[i] = B[i];
                B[i] = temp;
                ans.push_back({3, i+1});
            }
        }
        int size = ans.size();
        cout<<size<<endl;
        for(auto &it : ans){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
}
