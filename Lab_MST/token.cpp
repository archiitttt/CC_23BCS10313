#include<bits/stdc++.h>
using namespace std;

int score(vector<int>&tokens, int power){
    int score = 0;
    int i=0, j=tokens.size()-1;
    
    sort(tokens.begin(), tokens.end());

    while(i<=j){
        if(i==j){
            if(power >= tokens[i]){
                power -= tokens[i];
                score++;
                i++;
            }
            else{
                i++;
            }
        }
        else if(power >= tokens[i]){
            power -= tokens[i];
            score++;
            i++;
        }
        else if(score > 0){
            power += tokens[j];
            score--;
            j--;
        }
        else break;
    }

    return score;
}

int main(){
    int n, power;
    cin>>n>>power;
    vector<int>tokens(n);
    for(int i=0; i<n; i++){
        cin>>tokens[i];
    }
    int ans = score(tokens, power);
    cout<<"Max Score -> "<<ans<<endl;
    return 0;
}