#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(const string& s) {
    unordered_map<char, char> matching = {
        {')','('},
        {'}','{'},
        {']','['}
    };
    stack<char> st;
    for (char c : s) {
        // если открывающая скобка — кладём в стек
        if (c=='(' || c=='{' || c=='[') {
            st.push(c);
        }
        else {
            // если стек пуст или верх не соответствует — неверно
            if (st.empty() || st.top() != matching[c]) {
                return false;
            }
            st.pop();
        }
    }
    // строка валидна тогда и только тогда, когда стек пуст
    return st.empty();
}

int main() {
    string s;
    cout << "Введите строку скобок: ";
    getline(cin, s);

    bool valid = isValid(s);
    cout << (valid ? "true" : "false") << endl;
    return 0;
}