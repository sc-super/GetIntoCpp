lass Solution {
public:
    string longestPalindrome(string s) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    short l=s.size();
    bool ans[l][l];
    // fill(&ans[0][0],&ans[0][0]+l*l,false);
    memset(ans, 0, sizeof(ans));
    int left=0,right=0;
    for(short x=1;x<l;x++)
    {
        for(short y=0;y<x;y++)
        {
            if(s[x]==s[y] and (x-y<3 or ans[y+1][x-1]) )
            {
                ans[y][x]=true;
                if (x-y>=right-left){
                    left=y,right=x;
                }
            }
        }
    }
    return s.substr(left,right-left+1);
    }
};
