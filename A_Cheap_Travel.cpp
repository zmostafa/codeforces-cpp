#include <bits/stdc++.h>
#include <cmath>
#include <ios>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //n , m , a, b
    int plannedRides, ridesCoveredByM, oneRideTicketPrice, mRidesTicketPrice;
    int optimalPrice = 0;
    cin >> plannedRides >> ridesCoveredByM >> oneRideTicketPrice >> mRidesTicketPrice;
    
    if((ridesCoveredByM * oneRideTicketPrice) <= mRidesTicketPrice){
        cout << plannedRides * oneRideTicketPrice << endl;
    }else {
        cout << (plannedRides / ridesCoveredByM) * mRidesTicketPrice + min((plannedRides % ridesCoveredByM) * oneRideTicketPrice, mRidesTicketPrice);
    }
    // optimalPrice = min((plannedRides * oneRideTicketPrice) , (((plannedRides / ridesCoveredByM) * mRidesTicketPrice + min(((plannedRides % ridesCoveredByM) * mRidesTicketPrice), oneRideTicketPrice))));
    // cout << optimalPrice << endl;
    return 0;
}