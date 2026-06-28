"""
Definition of Interval:
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""

class Solution:
    def minMeetingRooms(self, interval: List[Interval]) -> int:
        if not interval:
            return 0
        intervals=sorted(interval,key=lambda x :x.start)
        pq=[]
        ans=1
        heapq.heappush(pq,intervals[0].end)
        for i in range(1,len(interval)):
            st=intervals[i].start
            en=intervals[i].end
            while len(pq)>0 and pq[0]<=st:
                heapq.heappop(pq)
            heapq.heappush(pq,en)
            ans=max(ans,len(pq))
        return ans

        
        