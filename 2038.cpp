class Solution {
public:
    bool winnerOfGame(string colors) {
        int CountA = 0; 
        int CountB = 0; 

        for (int i = 1; i < colors.size() - 1; ++i) {
            if (colors[i - 1] == colors[i] && colors[i] == colors[i + 1]) {
                if (colors[i] == 'A') 
                    CountA++;
                else 
                    CountB++;
            }
        }
        return CountA > CountB;
    }
};
