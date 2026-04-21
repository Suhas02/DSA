class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;

        int freq[52]={0};

        
 for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                freq[s[i] - 'A']++;
            else
                freq[s[i] - 'a' + 26]++;

            if (t[i] >= 'A' && t[i] <= 'Z')
                freq[t[i] - 'A']--;
            else
                freq[t[i] - 'a' + 26]--;
        }

        for(int i=0;i<52;i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }
};
