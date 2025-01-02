class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int x=max(x1,min(x2,xCenter));
        int y=max(y1,min(y2,yCenter));
        int dist=pow(x-xCenter,2)+pow(y-yCenter,2);
        return dist<= radius*radius;
    }
};