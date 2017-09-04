// Tags:    [string][backtracking]
class Solution {
public:
    string getPermutation(int n, int k) {
        string dict(n, '0'), res(n, '0');
        int nPerm = 1, div, i, j;
        --k;
        char ch;
        for(i = 2; i < n; ++i)  nPerm *= i;
        for(i = 1; i <= n; ++i){
            div = k / nPerm;
            k -= div * nPerm;
            i == n ? nPerm = 1 : nPerm /= (n - i);
            for(j = -1; div >= 0;)
                if(dict[++j] == '0')  --div;
            ch = '0' + j + 1;
            dict[j] = '1';
            res[i - 1] = ch;
        }
        return res;
    }
};
