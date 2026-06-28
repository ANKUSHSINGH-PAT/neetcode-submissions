/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& in) {
 sort(in.begin(), in.end(), [](const Interval &a, const Interval &b) {
            return a.start < b.start;
        });
        

        for(int i=1;i<in.size();i++)
        {
            if(in[i].start<in[i-1].end)
            {
               return false;
            }
        
        }
        return true;

        
    }
};
