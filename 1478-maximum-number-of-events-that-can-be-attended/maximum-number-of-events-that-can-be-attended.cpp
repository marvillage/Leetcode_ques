class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int n = events.size();
        sort(events.begin(), events.end());  // sort by start day

        priority_queue<int, vector<int>, greater<int>> pq; // min-heap for end days
        int i = 0, count = 0;

        int day = 1;
        while (!pq.empty() || i < n) {
            // Add events starting today
            while (i < n && events[i][0] == day) {
                pq.push(events[i][1]);
                i++;
            }

            // Remove expired events
            while (!pq.empty() && pq.top() < day) {
                pq.pop();
            }

            // Attend the event that ends the earliest
            if (!pq.empty()) {
                pq.pop();
                count++;
            }

            day++;
        }

        return count;
    }
};
