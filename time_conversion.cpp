#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
string hour = s.substr(0, 2);
    string minutesSeconds = s.substr(2, 6);
    string period = s.substr(8, 2);

    int h = stoi(hour);

    if (period == "AM") {
        if (h == 12) hour = "00";
    } else { // PM
        if (h != 12) hour = to_string(h + 12);
    }

    return hour + minutesSeconds;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
