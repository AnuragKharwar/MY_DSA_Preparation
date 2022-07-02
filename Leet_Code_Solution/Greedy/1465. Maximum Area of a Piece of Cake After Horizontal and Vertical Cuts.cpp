class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        sort(hc.begin(), hc.end());
        sort(vc.begin(), vc.end());
        int maxh = max(hc[0], h - hc.back()),     // getting the maximum height betweeen on comparing the 1st horixontal cut and the max height of the case vs last cut.
            maxv = max(vc[0], w - vc.back());     // getting the maximum width as above comparision
        for (int i = 1; i < hc.size(); i++)
            maxh = max(maxh, hc[i] - hc[i-1]);   //comparing each cut to its previous cut if its is greater than maxh calculated before it will update 
        for (int i = 1; i < vc.size(); i++)
            maxv = max(maxv, vc[i] - vc[i-1]);  //getting maximum width
        return (int)((long)maxh * maxv % 1000000007);
    }
};
        
