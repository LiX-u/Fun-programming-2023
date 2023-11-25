/*
 * FileName: 栗师哥去上课.cc
 * Author: xiao
 * Created time: 2023-11-25 17:13:22
 * Last Modified by: xiao
 * Last Modified time: 2023-11-25 17:19:54
 */

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int s, v, t;
    cin >> s >> v;
    if (s % v == 0)
        t = s / v;
    else
        t = s / v + 1;
    int start = 470 - t;
    if (start <= 0)
    {
        int x = start + 1440;
        int hour = x / 60;
        int minute = x % 60;
        if (hour < 10)
            cout << "0" << hour;
        else
        {
            if (hour == 24)
                cout << "00";
            else
                cout << hour;
        }
        cout << ":";
        if (minute < 10)
            cout << "0";
        cout << minute;
        cout << endl;
    }
    else
    {
        cout << "0" << start / 60 << ":";
        if (start % 60 < 10)
            cout << "0" << start % 60;
        else
            cout << start % 60;
        cout << endl;
    }
    return 0;
}