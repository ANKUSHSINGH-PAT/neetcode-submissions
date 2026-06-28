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
    int minMeetingRooms(vector<Interval>& in) {
         if (in.empty()) return 0;
           sort(in.begin(), in.end(), [](Interval a, Interval b) {
            return a.start < b.start;
        });
        priority_queue<int,vector<int>,greater<int>>pq;
        pq.push(in[0].end);

        for(int i=1;i<in.size();i++)
        {
            int st=in[i].start;
            int en=in[i].end;

            if(pq.empty()!=1&&in[i].start>=pq.top())
            pq.pop();

            pq.push(in[i].end);
        }
        if(pq.size()<=0)
        return 0;
        return pq.size();
        
    }
};
