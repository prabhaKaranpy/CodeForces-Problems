#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, tables, seats; cin>>n>>tables>>seats; 
        string s; cin>>s; 
        int maxi = 0; 
        int totalSeats = tables * seats; 
        int tablesUsed = 0; 
        int seatsUsed = 0; 
        int ambiverts = 0; 
        // int temp = 0; // currentlyAvailableSeats; 
        for(int i = 0; i < n; i++){
            char person = s[i]; 
            if(person == 'I'){
                if(tablesUsed < tables){
                    tablesUsed ++; 
                    totalSeats --; 
                    maxi ++; 
                    seatsUsed ++; 
                }
            }
            else if(person == 'E'){
                if(tablesUsed > 0 && totalSeats > 0){
                    int temp = tablesUsed * seats; temp -= seatsUsed; // temp = remainingSeats; 
                    if(temp > 0){
                        totalSeats --; 
                        maxi ++; 
                        seatsUsed ++; 
                    }
                    else{
                        if(ambiverts > 0){
                            if(tablesUsed < tables){
                                tablesUsed ++; 
                                ambiverts --; 
                                seatsUsed ++; 
                                totalSeats --; 
                                maxi ++; 
                            }
                            
                        }
                    }
                }

            }
            else{
                if((((tablesUsed * seats) - seatsUsed) == 0) && (tablesUsed < tables) && (totalSeats > 0)){
                    tablesUsed ++; 
                    totalSeats --; 
                    maxi ++; 
                    seatsUsed ++; 
                }
                else if(totalSeats > 0){
                    totalSeats --; 
                    maxi ++; 
                    seatsUsed ++; 
                    ambiverts ++; 
                }
            }
            // cout<<(i+1)<<" : "<<s[i]<<endl; 
            // cout<<"Tables Used : "<<tablesUsed<<endl; 
            // cout<<"Seats Used : "<<seatsUsed<<endl; 
            // cout<<"Count : "<<maxi<<endl; 
            // cout<<"Remaining : "<<totalSeats<<endl; 
            // cout<<endl; 
        } 
        cout<<maxi<<endl; 
    }
}