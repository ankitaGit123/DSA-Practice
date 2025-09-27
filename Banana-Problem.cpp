#include <bits/stdc++.h>
using namespace std;

// double maxBananas(int bananas, int distance, int capacity) {
//     double B = bananas;   // total bananas
//     double C = capacity;  // camel capacity
//     double D = distance;  // distance
//     double distCovered = 0.0;

//     while (B > 0 && distCovered < D) {
//         // loads required
//         int t = ceil(B / C);
//         double rate = 2.0 * t - 1; // bananas lost per km
//         // bananas limit when it drops to next stage
//         double nextThreshold = (t - 1) * C;

//         // how far can we go in this stage
//         double maxDistThisStage;
//         if (nextThreshold == 0) {
//             // last stage (t=1) → can go until destination
//             maxDistThisStage = D - distCovered;
//         } else {
//             // distance until we reach threshold
//             maxDistThisStage = (B - nextThreshold) / rate;
//             // don’t overshoot destination
//             maxDistThisStage = min(maxDistThisStage, D - distCovered);
//         }

//         // move this stage
//         B -= rate * maxDistThisStage;
//         distCovered += maxDistThisStage;
//     }

//     return max(0.0, B);
// }

// int main() {
//     int bananas = 3000, distance = 1000, capacity = 1000;
//     double result = maxBananas(bananas, distance, capacity);
//     cout << "Maximum bananas delivered: " << floor(result) << endl;
//     return 0;
// }



double maxBananas(int bananas, int capacity, int distance){
    double B = bananas;
    double C = capacity;
    double D = distance;
    double dc = 0.0;

    while( B > 0 && dc < D ){
        int t = ceil(B/C);
        double rate = 2.0 * t - 1;
        double remainB = (t - 1) * C;

        double maxThisStage;
        if(remainB == 0){
            maxThisStage = D - dc;
        
        } else{
            maxThisStage = (B - remainB)/rate;
            maxThisStage = min(maxThisStage, D - dc);
        }
        B -= rate * maxThisStage;
        dc += maxThisStage;
    }
    return max(0.0, B);
}

int main(){
    int bananas = 3000, capacity = 1000, distance = 1000;
    double result = maxBananas(bananas, capacity, distance);

    cout<< "Max remaining Bananas=  " << floor(result) <<endl;
    return 0;
}