class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        int d = b*b-4*a*c;
        if (d<0) return {-1};
        double root1 = (-b+sqrt(d))/(2*a);
        double root2 = (-b-sqrt(d))/(2*a);
        return {max((int)floor(root1), (int)floor(root2)), min((int)floor(root1), (int)floor(root2))};
    }
};