// #include<bits/stdc++.h>
// using namespace std; 
// int main(void){
//     int T; cin>>T; 
//     while(T--){
//         int n, r, b; cin>>n>>r>>b; 
//         char red = 'R', blue = 'B'; 
//         string s = ""; 
//         int temp = r / b; 
//         int mod = r % b; 
//         vector<string> ans; 
//         if(temp & 1){ 
//             int half = temp / 2; 
//             for(int z = 0; z < b; z++){ 
//                 for(int i = 1; i <= (half+1); i++){ 
//                       s.push_back(red); 
//                 } 
//                 s.push_back(blue); 
//                 for(int i = 1; i <= half; i++){ 
//                     s.push_back(red); 
                    
//                 } 
//                 ans.push_back(s); 
//                 s = ""; 
//                 // if(z < mod){ 
//                 //     s.push_back(red); 
//                 // } 
//             } 
//         } 
//         else{ 
//             int half = temp / 2; 
//             for(int z = 0; z < b; z++){ 
//                 for(int i = 1; i <= (half); i++){ 
//                     s.push_back(red); 
//                 } 
//                 s.push_back(blue); 
//                 for(int i = 1; i <= (half); i++){ 
//                     s.push_back(red); 
                   
//                 } 
//                 ans.push_back(s); 
//                 s = ""; 
//                 // if(z < mod){ 
//                 //     s.push_back(red); 
//                 // } 
//             } 
//         } 
//         int size = ans.size(); 
//         for(int i = size-1; i >= 0; i--){
//             if(mod == 0) break; 
//             ans[i].push_back(red); 
//             mod -= 1; 
//         } 
//         string finalString = ""; 
//         for(string &it : ans){
//             finalString.append(it); 
//         } 
//         cout<<finalString<<endl; 
//     }
// }
#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n, r, b; cin>>n>>r>>b; 
        char red = 'R', blue = 'B'; 
        vector<string> arr; 
        for(int i = 0; i < (b+1); i++){
            string temp = ""; 
            arr.push_back(temp); 
        } 
        for(int i = 0; i < r; i++){
            arr[(i%(b+1))].push_back(red);   
        } 
        string ans = ""; 
        for(int i = 0; i < b; i++){ 
            ans.append(arr[i]); 
            ans.push_back(blue); 
        } 
        ans.append(arr[b]); 
        cout<<ans<<endl; 
    }
}