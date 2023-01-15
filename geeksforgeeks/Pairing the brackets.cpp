vector<pair<int,int>> pairingBrackets(string s)
{
    //Your code here
    queue<int> q;
    vector<pair<int, int>> pairs;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            q.push(i);
        } else if (s[i] == ')') {
            if (!q.empty()) {
                pairs.push_back({q.front(), i});
                q.pop();
            }
        }
    }
    return pairs;
}