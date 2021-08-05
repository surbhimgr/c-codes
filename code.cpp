class Solution {
public:
    int trap(vector<int>& height) {
        int cnt=0;
        int n=height.size();
        vector<int> lmax(n),rmax(n);
        lmax[0]=height[0];

        for(int i=1;i<n;i++){
            lmax[i]=max(lmax[i-1],height[i]);
        }
        rmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],height[i]);

        }
        
        for(int j=1;j<n-1;j++){
            cnt+=min(rmax[j],lmax[j])-height[j];
        }
        return cnt;
    }
};