#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int result = 0;

    for(int i = 0; i <= 32; i++){
        int sum = 0;

        for(int num : nums){
            if(num & (1 << i)){
                sum++;
            }
        }

        if(sum % 3 != 0){
            result |= (1 << i);
        }
    }

    cout << "Result: " << result << endl;
    return 0;
}