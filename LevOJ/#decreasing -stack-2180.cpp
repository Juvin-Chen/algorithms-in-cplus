// 最简单的单调栈的应用

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n), res(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            res[st.top()] = i + 1;
            st.pop();
        }
        st.push(i);
    }
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}