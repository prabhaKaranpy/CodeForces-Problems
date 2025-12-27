#include<bits/stdc++.h>
#define ll long long
using namespace std;

int f(int n){
    if(n == 1){
        return 1;

    }
    return n * f(n-1);

}
int main(void){
    int n;
    cin>>n;
    cout<<n+f(n);
    stack<int> st;
    st.push(1);
    st.push(2);

    cout << st.top()<<endl;
    
}
