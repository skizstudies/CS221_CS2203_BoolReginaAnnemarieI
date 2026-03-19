#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findCombinations(int index, int target, vector<int>& candidates, vector<int>& current, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(current);
        return;
    }

    for (int i = index; i < candidates.size(); i++) {
        if (candidates[i] > target) {
            break;
        }

        current.push_back(candidates[i]);
        findCombinations(i, target - candidates[i], candidates, current, result);
        current.pop_back();
    }
}

int main() {
    int n, target;

    cout << "Enter number of candidates: ";
    cin >> n;

    vector<int> candidates(n);
    cout << "Enter the candidates: ";
    for (int i = 0; i < n; i++) {
        cin >> candidates[i];
    }

    cout << "Enter the target: ";
    cin >> target;

    sort(candidates.begin(), candidates.end());

    vector<vector<int>> result;
    vector<int> current;

    findCombinations(0, target, candidates, current, result);

    if (result.empty()) {
        cout << "No combination found." << endl;
    } else {
        cout << "Combinations are:" << endl;
        for (const auto& combination : result) {
            cout << "{";
            for (int i = 0; i < combination.size(); i++) {
                cout << " " <<combination[i] << " ";
            }
            cout << "}" << endl;
        }
    }
}