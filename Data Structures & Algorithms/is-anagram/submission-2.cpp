class Solution {
public:
    bool isAnagram(string s, string t) {
        bool a = 1;
        string q = t;
        for (int i = 0; i < s.size(); i++){
            size_t position = q.find(s[i]);
            if (position != string::npos) {
                q.erase(position,1);
                }
            else { a = 0;
            return a; }
        }
        for (int j = 0; j < t.size(); j++){
            size_t position2 = s.find(t[j]);
            if (position2 != string::npos) {
                s.erase(position2,1);
                }
            else { a = 0;
            return a; }
        }
         return a;

    }
};
