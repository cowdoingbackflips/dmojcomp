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

    int N;
    cin >> N;

    string code;
    string translated = "";
    int total = 0;
    int num = 0;

    vector<int> nums;

    for (int l = 0; l < N; l++) {
        cin >> code;

        for (int i = 0; i < code.length(); i++) {
            if (code[i] == 'a' || code[i] == 'b' || code[i] == 'c' || code[i] == 'd' || code[i] == 'e' || code[i] == 'f' || code[i] == 'g' || code[i] == 'h' || code[i] == 'i' || code[i] == 'j' || code[i] == 'k' || code[i] == 'l' || code[i] == 'm' || code[i] == 'n' || code[i] == 'o' || code[i] == 'p' || code[i] == 'q' || code[i] == 'r' || code[i] == 's' || code[i] == 't' || code[i] == 'u' || code[i] == 'v' || code[i] == 'w' || code[i] == 'x' || code[i] == 'y' || code[i] == 'z') {

            }
            else if (code[i] == '0' || code[i] == '1' || code[i] == '2' || code[i] == '3' || code[i] == '4' || code[i] == '5' || code[i] == '6' || code[i] == '7' || code[i] == '8' || code[i] == '9') {
                    if (code[i] == '0') {
                        nums.push_back(0);
                    }
                    else if (code[i] == '1') {
                        nums.push_back(1);
                    }
                    else if (code[i] == '2') {
                        nums.push_back(2);
                    }
                    else if (code[i] == '3') {
                        nums.push_back(3);
                    }
                    else if (code[i] == '4') {
                        nums.push_back(4);
                    }
                    else if (code[i] == '5') {
                        nums.push_back(5);
                    }
                    else if (code[i] == '6') {
                        nums.push_back(6);
                    }
                    else if (code[i] == '7') {
                        nums.push_back(7);
                    }
                    else if (code[i] == '8') {
                        nums.push_back(8);
                    }
                    else if (code[i] == '9') {
                        nums.push_back(9);
                    }
                for (int j = i+1; j < code.length(); j++) {

                    if (code[j] == '0') {
                        nums.push_back(0);
                    }
                    else if (code[j] == '1') {
                        nums.push_back(1);
                    }
                    else if (code[j] == '2') {
                        nums.push_back(2);
                    }
                    else if (code[j] == '3') {
                        nums.push_back(3);
                    }
                    else if (code[j] == '4') {
                        nums.push_back(4);
                    }
                    else if (code[j] == '5') {
                        nums.push_back(5);
                    }
                    else if (code[j] == '6') {
                        nums.push_back(6);
                    }
                    else if (code[j] == '7') {
                        nums.push_back(7);
                    }
                    else if (code[j] == '8') {
                        nums.push_back(8);
                    }
                    else if (code[j] == '9') {
                        nums.push_back(9);
                    }
                    else {
                        break;
                    }
                    i++;
                }
                for (int n = nums.size()-1; n >= 0; n--) {
                    total += nums[n]*pow(10, nums.size()-n-1);
                    //cout << "Added+: " << nums[n]*pow(10, nums.size()-n-1);
                    //cout << nums[n]*pow(10, n) << "\n";
                    //cout << total << "total" << "/n";
                }
                nums.clear();
            }
            else if (code[i] == '-') {
                for (int j = i+1; j < code.length(); j++) {
                    
                    if (code[j] == '0') {
                        nums.push_back(0);
                    }
                    else if (code[j] == '1') {
                        nums.push_back(-1);
                    }
                    else if (code[j] == '2') {
                        nums.push_back(-2);
                    }
                    else if (code[j] == '3') {
                        nums.push_back(-3);
                    }
                    else if (code[j] == '4') {
                        nums.push_back(-4);
                    }
                    else if (code[j] == '5') {
                        nums.push_back(-5);
                    }
                    else if (code[j] == '6') {
                        nums.push_back(-6);
                    }
                    else if (code[j] == '7') {
                        nums.push_back(-7);
                    }
                    else if (code[j] == '8') {
                        nums.push_back(-8);
                    }
                    else if (code[j] == '9') {
                        nums.push_back(-9);
                    }
                    else {
                        break;
                    }
                    i++;
                }
                for (int n = nums.size()-1; n >= 0; n--) {
                    total += nums[n]*pow(10, nums.size()-n-1);
                    //cout << "Added+: " << nums[n]*pow(10, nums.size()-n-1);
                }
                nums.clear();
            }
            else {
                translated += code[i];
            }
        }
        cout << translated << total << "\n";
        translated = "";
        total = 0;
    }
}
