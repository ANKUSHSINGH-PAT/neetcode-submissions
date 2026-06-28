"""
Definition of Interval:
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""

class Solution:
    def canAttendMeetings(self, intervals: List[Interval]) -> bool:
        if not intervals:
            return True
        i=sorted(intervals,key=lambda x:x.start)
        st=i[0].start
        en=i[0].end
        for x in range(1,len(i)):
            if i[x].start<en:
                return False
            st=min(st,i[x].start)
            en=max(en,i[x].end)
        return True
