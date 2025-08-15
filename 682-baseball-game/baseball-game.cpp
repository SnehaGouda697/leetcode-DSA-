class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;  // Should store integers, not chars
        int n = operations.size(); // use size(), not length() for vector
        for (int i = 0; i < n; i++) {
            if (operations[i] == "+") {
                int top1 = s.top(); s.pop();
                int top2 = s.top();
                s.push(top1);
                s.push(top1 + top2);
            }
            else if (operations[i] == "D") {
                s.push(s.top() * 2);
            }
            else if (operations[i] == "C") {
                s.pop();
            }
            else {
                s.push(stoi(operations[i])); // convert string to int
            }
        }

        int ans = 0;
        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }
        return ans;
    }
};
