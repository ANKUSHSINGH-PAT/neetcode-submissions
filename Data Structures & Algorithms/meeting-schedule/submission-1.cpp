class Solution {
public:
    bool canAttendMeetings(vector<Interval>& in) {
        // Sort by start time
        sort(in.begin(), in.end(), [](const Interval &a, const Interval &b) {
            return a.start < b.start;
        });

        // Check for any overlap
        for (int i = 1; i < in.size(); i++) {
            if (in[i].start < in[i - 1].end) {
                return false; // Overlapping meeting found
            }
        }

        return true; // No overlaps found
    }
};
