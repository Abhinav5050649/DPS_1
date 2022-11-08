#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);
    
    string word; cin >> word;
    sort(word.begin(), word.end());
    vector<string> ans;
    do
    {   
        ans.push_back(word);
    } while (next_permutation(word.begin(), word.end()));
    
    cout << ans.size() << endl;
    for (auto it: ans)
    {
        cout << it << endl;
    }

    ans.clear();
    return 0;
}