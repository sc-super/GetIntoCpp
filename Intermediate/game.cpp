class Solution {
public:
    bool judgePoint24(vector<int>& nums) {
        vector<double> doubles;
        std::transform(nums.begin(), nums.end(), std::back_inserter(doubles),
                       [](const int num) { return double(num); });
        return dfs(doubles);
    }

private:
    bool dfs(const vector<double>& nums) {
        if (nums.size() == 1) {
     
       return fabs(nums[0] - 24) < 1e-6;
        }
        static unordered_map<char, std::function<double(double, double)>> ops =
        {
            {'+', std::plus<double>()},
            {'-', std::minus<double>()},
     
       {'*', std::multiplies<double>()},
            {'/', std::divides<double>()},
        };
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (i == j) {
                    continue;
             

   }
                vector<double> next_nums;
                for (int k = 0; k < nums.size(); ++k) {
                    if (k == i || k == j) {
                        continue;
                    }
       
             n    ext_nums.emplace_back(nums[k]);
                }
