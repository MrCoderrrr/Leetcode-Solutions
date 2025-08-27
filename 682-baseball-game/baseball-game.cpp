class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        
        for(const string& op : operations) {
            if(op == "+") {
                if(scores.size() >= 2) {
                    int last = scores[scores.size()-1];
                    int secondLast = scores[scores.size()-2];
                    scores.push_back(last + secondLast);
                }
            }
            else if(op == "C") {
                if(!scores.empty()) {
                    scores.pop_back();
                }
            }
            else if(op == "D") {
                if(!scores.empty()) {
                    scores.push_back(scores.back() * 2);
                }
            }
            else {
                scores.push_back(stoi(op));
            }
        }
        
        int Sum = 0;
        for(int score : scores) {
            Sum += score;
        }
        
        return Sum;
    }
};
