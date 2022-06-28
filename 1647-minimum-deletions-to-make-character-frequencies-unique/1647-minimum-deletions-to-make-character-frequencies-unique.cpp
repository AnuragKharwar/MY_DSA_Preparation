class Solution {
public:
    // int minDeletions(string s) {
//          sort(s.begin(), s.end());
//         unordered_map<char,int> map;
//         for(char c:s)
//         {
//             map[c]++;
//         }
//         int count=0;
// //         for(int i=0;i<s.size();i++)
// //         {
// //             for(int j=i+1;j<s.size();j++)
// //             {
// //                 if(map[s[i]]==map[s[j]] && s[i]!=s[j])
// //                 {
// //                     map[s[i]]--;
// //                     count++;
// //                 }
// //                 }
            
            
// //         }
        
        
//         for(int i=0;i<s.size();i++)
//         {
//             for(int j=i+1;j<s.size();j++)
//             {
//                 if(map[s[i]]==map[s[j]] && s[i]!=s[j])
//                 {
//                     map[s[i]]--;
//                     count++;
//                 }
//             }
//         }
//         return count;
    
    int minDeletions(string s) {
    int cnt[26] = {}, res = 0;
    unordered_set<int> used;
    for (char ch : s)
        ++cnt[ch - 'a'];
    for (int i = 0; i < 26; ++i)
        for (; cnt[i] > 0 && !used.insert(cnt[i]).second; --cnt[i])
            ++res;
    return res;

    }
};