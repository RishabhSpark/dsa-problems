class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double sum = 0.0;
        for(int i=1; i<salary.size()-1; i++){
            sum+=salary[i];
        }
        return sum/(salary.size()-2);
        // double minele = *min_element(salary.begin(), salary.end());
        // double maxele = *max_element(salary.begin(), salary.end());
        // double sum = 0;
        // double n = 0;
        // for(int i=0; i<salary.size(); i++){
        //     if(i!=minele || i!=maxele){
        //         sum+=salary[i];
        //         n++;
        //     }
        // }
        // double average = sum/n;
        // return average;
    }
};