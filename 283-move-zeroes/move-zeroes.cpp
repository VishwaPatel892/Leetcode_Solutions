class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        vector<int> result;

        for (int x : arr) {
            if (x != 0) {
                result.push_back(x);
            }
        }

        for (int x : arr) {
            if (x == 0) {
                result.push_back(0);
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = result[i];
        }
    }
};