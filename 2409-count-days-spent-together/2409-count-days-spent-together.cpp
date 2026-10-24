class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        string aAm, lAm, aBm, lBm;
        string aAd, lAd, aBd, lBd;
        for (int i = 0; i < 5; i++) {
            if (i == 2) {
                continue;
            }
            if (i < 2) {
                aAm.push_back(arriveAlice[i]);
                lAm.push_back(leaveAlice[i]);
                aBm.push_back(arriveBob[i]);
                lBm.push_back(leaveBob[i]);
            }
            if (i > 2) {
                aAd.push_back(arriveAlice[i]);
                lAd.push_back(leaveAlice[i]);
                aBd.push_back(arriveBob[i]);
                lBd.push_back(leaveBob[i]);
            }
        }
        int AAM = stoi(aAm), LAM = stoi(lAm), ABM = stoi(aBm), LBM = stoi(lBm);
        int AAD = stoi(aAd), LAD = stoi(lAd), ABD = stoi(aBd), LBD = stoi(lBd);
        int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30,31,30,31};
        int a = 0, b = 0, c = 0, d = 0;
        for (int i = 0; i < AAM; i++) {
            if (i == AAM - 1) {
                a = a + AAD;
            } else {
                a = a + months[i];
            }
        }
        for (int i = 0; i < LAM; i++) {
            if (i == LAM - 1) {
                b = b + LAD;
            } else {
                b = b + months[i];
            }
        }for (int i = 0; i < ABM; i++) {
            if (i == ABM - 1) {
                c = c + ABD;
            } else {
                c = c + months[i];
            }
        }for (int i = 0; i < LBM; i++) {
            if (i == LBM - 1) {
                d = d + LBD;
            } else {
                d = d + months[i];
            }
        }
        if(min(b,d)-max(a,c)+1<0){
            return 0;
        }
        return min(b,d)-max(a,c)+1;
    }
};