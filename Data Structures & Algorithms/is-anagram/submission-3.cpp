class Solution {
public:
    bool isAnagram(string s, string t) {
        bool a;
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        map<char, int> m;

      for (int j = 0; j < alpha.size(); j++) { m.insert({alpha[j],0});}
        for (int i = 0; i < s.size(); i++) {
           int f = m[s[i]]; m[s[i]] = ++f;
           }
    map<char, int> m2;
    for (int j = 0; j < alpha.size(); j++) { m2.insert({alpha[j],0});}

        for (int k = 0; k < t.size(); k++) {
           int g = m2[t[k]]; m2[t[k]] = ++g;
           }
           for (int l = 0; l < 26; l++) {if (m[alpha[l]] == m2[alpha[l]]) { a = 1 ;}
           else {a = 0; return a;}}
        return a;


    }
};
