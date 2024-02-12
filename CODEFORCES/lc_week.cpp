class Solution {
public:
    
    bool isPalindrome(string& word) {
        int i = 0, j = word.size()-1;
        while(i<j){
            if(word[i]!=word[j])
                return false;
            i++;
            j--;
        }
        return true;
}

    int maxPalindromesAfterOperations(vector<string>& words) {
        int n = words.size();
        int maxPalindromeCount = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int x = 0; x < words[i].size(); ++x) {
                    for (int y = 0; y < words[j].size(); ++y) {
                        string tI = words[i];
                        string tempJ = words[j];
                        swap(tI[x], tempJ[y]);

                        if (isPalindrome(tI) && isPalindrome(tempJ)) {
                            maxPalindromeCount = max(maxPalindromeCount, 2);
                        }
                    }
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            if (isPalindrome(words[i])) {
                maxPalindromeCount = max(maxPalindromeCount, 1);
            }
        }

        return maxPalindromeCount;
    }
};