class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        vector<int>ans;
        int n = people.size();
        sort(people.begin(),people.end());
        int c = 0;
        int i =0,j=n-1;
        while(i<j){
            if(people[i]+people[j]==limit|| people[i]+people[j] <limit ){
                c++;
                i++;
                j--;
            }
           
            else if( people[i]+people[j] >limit){
                c++;
                j--;;
            }
             if(j== i) {
                c++;
                break;
            }
        }
        
        return c;
        
    }
};