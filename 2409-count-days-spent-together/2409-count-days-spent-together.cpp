class Solution {
public:
    int get_days(string &dates){

        vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month = stoi(dates.substr(0,2));
        int date = stoi(dates.substr(3,2));
        int days=0;

        for(int i=0;i<month-1;i++){
            days += daysInMonth[i];
        }
        return days+date;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int alice_start = get_days(arriveAlice);
        int alice_end = get_days(leaveAlice);
        int bob_start = get_days(arriveBob);
        int bob_end = get_days(leaveBob);

        int start = max(alice_start,bob_start);
        int end = min(alice_end,bob_end);
        cout<<start << " " << end;
        return  max(0,end-start+1);
    }
};