// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <map>
#include <vector> 
#include <algorithm>
#include <array>
#include <functional>
#include <string>
#include <iomanip>
#include <queue>
#include <set>
using namespace std;
#define ll long long


int main() {

    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);  // when submit remember to DELETE THESE AHHHHH

    int donuts;
    int n;
    int d;
    char event;


    cin >> donuts >> n;

    for (int i = 0; i < n; i++){

        cin >> event >> d;

        if (event == '+') {
            donuts += d;
        }
        else if (event == '-') {
            donuts -= d;
        }

    }
    

    cout << donuts;
}
