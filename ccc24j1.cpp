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

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        int count = 0;

        for (int i = 0; i < str.length()-1; i++) {
            if (str[i] == str[i+1]) {
                count++;
            }
        }

        cout << str.length() - count << "\n";
    }
}
