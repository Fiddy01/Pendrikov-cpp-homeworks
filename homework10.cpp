#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Функция находит и возвращает индексы двух чисел, дающих в сумме target
vector<int> twoSum(const vector<long long>& nums, long long target) {
    unordered_map<long long, int> idx;
    for (int i = 0; i < (int)nums.size(); ++i) {
        long long need = target - nums[i];
        auto it = idx.find(need);
        if (it != idx.end()) {
            // нашли пару: it->second и i
            return { it->second, i };
        }
        // иначе запоминаем текущий элемент
        idx[nums[i]] = i;
    }
    // по условию всегда есть решение, но на всякий случай:
    return {};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    // читаем размер массива
    if (!(cin >> n) || n < 2) {
        cerr << "Некорректный размер массива\n";
        return 1;
    }

    vector<long long> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    long long target;
    cin >> target;

    vector<int> answer = twoSum(nums, target);
    if (answer.size() == 2) {
        // выводим индексы (0-based). Если нужен 1-based, прибавьте +1.
        cout << answer[0] << " " << answer[1] << "\n";
    } else {
        cout << "Решение не найдено\n";
    }

    return 0;
}