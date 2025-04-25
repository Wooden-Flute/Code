#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

string current_str; // Current working string
string clipboard_str; // Clipboard content

// KMP algorithm to find all occurrences of pattern p in string s
vector<int> kmp(const string& s, const string& p) {
    vector<int> res;
    int m = p.size();
    if (m == 0) return res;

    vector<int> next(m, 0);
    for (int i = 1, len = 0; i < m; ) {
        if (p[i] == p[len]) {
            next[i++] = ++len;
        }
        else {
            if (len != 0) len = next[len - 1];
            else next[i++] = 0;
        }
    }

    for (int i = 0, j = 0; i < s.size(); ) {
        if (s[i] == p[j]) {
            i++, j++;
            if (j == m) {
                res.push_back(i - j);
                j = next[j - 1];
            }
        }
        else {
            if (j != 0) j = next[j - 1];
            else i++;
        }
    }
    return res;
}

// Cut operation: extracts substring from start_pos to end_pos (inclusive)
void cut(int start_pos, int end_pos) {
    int start = start_pos - 1;
    int end = end_pos - 1;
    clipboard_str = current_str.substr(start, end - start + 1);
    current_str = current_str.substr(0, start) + current_str.substr(end + 1);
}

// Paste operation: inserts clipboard content based on pre and post strings
void paste(string pre, string post) {
    int m = pre.size(), n = post.size();
    int insert_pos = -1;

    if (m == 0 && n == 0) {
        insert_pos = 0;
    }
    else if (m == 0) {
        if (current_str.substr(0, n) == post) insert_pos = 0;
    }
    else if (n == 0) {
        vector<int> pre_pos = kmp(current_str, pre);
        for (int start_pre : pre_pos) {
            int i = start_pre + m - 1;
            if (i + 1 <= current_str.size()) {
                insert_pos = i + 1;
                break;
            }
        }
    }
    else {
        vector<int> pre_pos = kmp(current_str, pre);
        unordered_set<int> post_pos;
        vector<int> tmp = kmp(current_str, post);
        post_pos.insert(tmp.begin(), tmp.end());
        for (int start_pre : pre_pos) {
            int i = start_pre + m - 1;
            if (i + 1 < current_str.size() && post_pos.count(i + 1)) {
                insert_pos = i + 1;
                break;
            }
        }
    }

    if (insert_pos != -1) {
        current_str = current_str.substr(0, insert_pos) + clipboard_str + current_str.substr(insert_pos);
    }
    else {
        current_str += clipboard_str;
    }
    clipboard_str.clear();
}

int main1() {
    // Example usage
    current_str = "abcdefg";
    cut(3, 5); // Cuts "cde", current_str becomes "abfg"
    cout << "After cut: " << current_str << endl;

    paste("bf", "g"); // Pastes "cde" between "bf" and "g"
    cout << "After paste: " << current_str << endl; // Result: "abfcdeg"

    return 0;
}
